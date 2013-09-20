(function ($) {

/**
 * Provide summary information for vertical tabs.
 */
Drupal.behaviors.onix_facebook = {
  attach: function (context) {
    //console.log("Debbugging FBAppID: "+Drupal.settings.onix_facebook.FBAppID);    
    // Init the SDK upon load
    window.fbAsyncInit = function() {
      
      FB.init({
        appId  : Drupal.settings.onix_facebook.FBAppID,
        status : true, // check login status
        cookie : true, // enable cookies to allow the server to access the session
        xfbml  : true,  // parse XFBML
        oauth : true // OAuth 2.0 functionality
      });        

      // listen for and handle auth.statusChange events
      FB.Event.subscribe('auth.statusChange', function(response) {
        if (response.authResponse) {
          // user has auth'd your app and is logged into Facebook
          FB.api(
            {
              method: 'fql.query',
              query: 'SELECT first_name, middle_name, last_name, email   FROM user WHERE uid=me()'
            },
            function(response) {
              //$('#edit-submitted-fieldset-full-name').val(response[0].first_name+' '+response[0].last_name);     //commented to disable autofill on webform because we are not using fb login now  (mark/hedirman 2013-10-6)
              //$('#edit-submitted-fieldset-email').val(response[0].email);              //commented to disable autofill on webform because we are not using fb login now (mark/hedirman 2013-10-6)

              $('#auth-displayname').html(response[0].first_name+' '+response[0].last_name);
              $('#auth-email').html(response[0].email);
            }
          );          
          $('#auth-loggedout').css('display', 'none');
          $('#auth-loggedin').css('display', 'block');
        } else {
          // user has not auth'd your app, or is not logged into Facebook
          $('#auth-loggedout').css('display', 'block');
          $('#auth-loggedin').css('display', 'none');
        }
      });
      // respond to clicks on the login and logout links
      $('#auth-loginlink').click(function(){
        FB.login();
      });
      $('#auth-logoutlink').click(function(){
        FB.logout();
      }); 
    }     
    
  }
};

})(jQuery);
