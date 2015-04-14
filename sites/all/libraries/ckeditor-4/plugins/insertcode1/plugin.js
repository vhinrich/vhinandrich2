/*
 Copyright (c) 2003-2012, CKSource - Frederico Knabben. All rights reserved.
 For licensing, see LICENSE.html or http://ckeditor.com/license
 */

CKEDITOR.plugins.add( 'insertcode1',
	{
		requires: 'dialog',
		lang : 'en,pl', // %REMOVE_LINE_CORE%
		icons: 'insertcode1', // %REMOVE_LINE_CORE%
		onLoad : function()
		{
			if ( CKEDITOR.config.insertcode1_class )
			{
				CKEDITOR.addCss(
					'code.' + CKEDITOR.config.insertcode1_class + ' {' +
						CKEDITOR.config.insertcode1_style +
						'}'
				);
			}
		},
		init : function( editor )
		{
			// allowed and required content is the same for this plugin
			var required = CKEDITOR.config.insertcode1_class ? ( 'code( ' + CKEDITOR.config.insertcode1_class + ' )' ) : 'code';
			editor.addCommand( 'insertcode1', new CKEDITOR.dialogCommand( 'insertcode1', {
				allowedContent : required,
				requiredContent : required
			} ) );
			editor.ui.addButton && editor.ui.addButton( 'insertcode1',
				{
					label : editor.lang.insertcode1.title,
					icon : this.path + 'icons/insertpre.png',
					command : 'insertcode1',
					toolbar: 'insert,99'
				} );

			if ( editor.contextMenu )
			{
				editor.addMenuGroup( 'code' );
				editor.addMenuItem( 'insertcode1',
					{
						label : editor.lang.insertcode1.edit,
						icon : this.path + 'icons/insertpre.png',
						command : 'insertcode1',
						group : 'code'
					});
				editor.contextMenu.addListener( function( element )
				{
					if ( element )
						element = element.getAscendant( 'code', true );
					if ( element && !element.isReadOnly() && element.hasClass( editor.config.insertcode1_class ) )
						return { insertcode1 : CKEDITOR.TRISTATE_OFF };
					return null;
				});
			}

			CKEDITOR.dialog.add( 'insertcode1', function( editor )
			{
				return {
					title : editor.lang.insertcode1.title,
					minWidth : 540,
					minHeight : 380,
					contents : [
						{
							id : 'general',
							label : editor.lang.insertcode1.code,
							elements : [
								{
									type : 'textarea',
									id : 'contents',
									label : editor.lang.insertcode1.code,
									cols: 140,
									rows: 22,
									validate : CKEDITOR.dialog.validate.notEmpty( editor.lang.insertcode1.notEmpty ),
									required : true,
									setup : function( element )
									{
										var html = element.getHtml();
										if ( html )
										{
											var div = document.createElement( 'div' );
											div.innerHTML = html;
											this.setValue( div.firstChild.nodeValue );
										}
									},
									commit : function( element )
									{
										element.setHtml( CKEDITOR.tools.htmlEncode( this.getValue() ) );
									}
								}
							]
						}
					],
					onShow : function()
					{
						var sel = editor.getSelection(),
							element = sel.getStartElement();
						if ( element )
							element = element.getAscendant( 'code', true );

						if ( !element || element.getName() != 'code' || !element.hasClass( editor.config.insertcode1_class ) )
						{
							element = editor.document.createElement( 'code' );
							this.insertMode = true;
						}
						else
							this.insertMode = false;

						this.code = element;
						this.setupContent( this.code );
					},
					onOk : function()
					{
						if ( editor.config.insertcode1_class )
							this.code.setAttribute( 'class', editor.config.insertcode1_class );

						if ( this.insertMode )
							editor.insertElement( this.code );

						this.commitContent( this.code );
					}
				};
			} );
		}
	} );

if (typeof(CKEDITOR.config.insertcode1_style) == 'undefined')
	CKEDITOR.config.insertcode1_style = 'background-color:#F8F8F8;border:1px solid #DDD;padding:10px;';
if (typeof(CKEDITOR.config.insertcode1_class)  == 'undefined')
	CKEDITOR.config.insertcode1_class = 'prettyprint';
