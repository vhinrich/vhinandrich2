var server = window.location.hostname
var channel = "today";
var Prop1 = "sg";
var Prop2 = "tdy";
var s_code;

function pagetracking(ObjOmni)
{

    s.pageName=ObjOmni.pg 
    s.server=ObjOmni.server
    s.channel=ObjOmni.ch
    s.prop1=ObjOmni.p1
    s.prop2=ObjOmni.p2
    s.prop3=ObjOmni.p3
    s.prop4=ObjOmni.p4 
    s.prop5=ObjOmni.p5
    s.prop6=ObjOmni.p6
    s.prop7=ObjOmni.p7
    s.prop8=ObjOmni.p8
    /* Conversion Variables */
    s.events=ObjOmni.eve
    /* Hierarchy Variables */
    s.hier1=ObjOmni.hier 
    /************* DO NOT ALTER ANYTHING BELOW THIS LINE ! **************/
	s_code = s.t();
	if (s_code) document.write(s_code);
}

function searchtrack(ObjOmni)
{
	s.pageName=ObjOmni.pg 
    s.server=ObjOmni.server
    s.channel=ObjOmni.ch
    s.prop1=ObjOmni.p1
    s.prop2=ObjOmni.p2
    s.prop3=ObjOmni.p3
    s.prop4=ObjOmni.p4 
    s.prop5=ObjOmni.p5
    s.prop6=ObjOmni.p6
    s.prop7=ObjOmni.p7
    s.prop8=ObjOmni.p8
	s.prop11=ObjOmni.p11.toLowerCase()
	s.prop12=ObjOmni.p12            
	/* Conversion Variables */
    s.events=ObjOmni.eve
    /* Hierarchy Variables */
    s.hier1=ObjOmni.hier 
    /************* DO NOT ALTER ANYTHING BELOW THIS LINE ! **************/
	s_code = s.t();
	if (s_code) document.write(s_code);
}

function sendComments(ObjOmni)
{
    s.pageName=ObjOmni.pg 
    s.server=ObjOmni.server
    s.channel=ObjOmni.ch
    s.prop1=ObjOmni.p1
    s.prop2=ObjOmni.p2
    s.prop3=ObjOmni.p3
    s.prop4=ObjOmni.p4 
    s.prop5=ObjOmni.p5
    s.prop6=ObjOmni.p6
    s.prop7=ObjOmni.p7
    /* Hierarchy Variables */
    s.hier1=ObjOmni.hier 
    
    s.linkTrackVars='events,eVar29';
    s.linkTrackEvents='event15';
    s.events='event15';
    s.eVar29='comments';
    s.tl(this,'o','comments');
                                                        
    /************* DO NOT ALTER ANYTHING BELOW THIS LINE ! **************/
	s_code = s.t();
	if (s_code) document.write(s_code);
}

function sendRate(ObjOmni)
{
    s.pageName=ObjOmni.pg 
    s.server=ObjOmni.server
    s.channel=ObjOmni.ch
    s.prop1=ObjOmni.p1
    s.prop2=ObjOmni.p2
    s.prop3=ObjOmni.p3
    s.prop4=ObjOmni.p4 
    s.prop5=ObjOmni.p5
    s.prop6=ObjOmni.p6
    s.prop7=ObjOmni.p7
    /* Hierarchy Variables */
    s.hier1=ObjOmni.hier 
    
    /* Conversion Variables */
	s.linkTrackVars='events,eVar29';
	s.linkTrackEvents='event15';
	s.events='event15';
	s.eVar29='rate';
    s.tl(this,'o','rate');
                                                        
    /************* DO NOT ALTER ANYTHING BELOW THIS LINE ! **************/
	s_code = s.t();
	if (s_code) document.write(s_code);
}

//function forwardFriend(ObjOmni)
//{
//    s.pageName=ObjOmni.pg 
//    s.server=ObjOmni.server
//    s.channel=ObjOmni.ch
//    s.prop1=ObjOmni.p1
//    s.prop2=ObjOmni.p2
//    s.prop3=ObjOmni.p3
//    s.prop4=ObjOmni.p4 
//    s.prop5=ObjOmni.p5
//    s.prop6=ObjOmni.p6
//    s.prop7=ObjOmni.p7
//    /* Hierarchy Variables */
//    s.hier1=ObjOmni.hier 
//    
//    s.linkTrackVars='events,eVar29';
//    s.linkTrackEvents='event15';
//    s.events='event15';
//    s.eVar29='forwardfriend';
//    s.tl(this,'o','forward friend');

//                                                        
//    /************* DO NOT ALTER ANYTHING BELOW THIS LINE ! **************/
//    void(s.t());
//}

function forwardEmail(ObjOmni)
{
    s.pageName=ObjOmni.pg 
    s.server=ObjOmni.server
    s.channel=ObjOmni.ch
    s.prop1=ObjOmni.p1
    s.prop2=ObjOmni.p2
    s.prop3=ObjOmni.p3
    s.prop4=ObjOmni.p4 
    s.prop5=ObjOmni.p5
    s.prop6=ObjOmni.p6
    s.prop7=ObjOmni.p7
    /* Hierarchy Variables */
    s.hier1=ObjOmni.hier 
    
    s.linkTrackVars='events,eVar29';
    s.linkTrackEvents='event15';
    s.events='event15';
    s.eVar29=ObjOmni.eVar29;
    s.tl(this,'o',ObjOmni.tl);

                                                        
    /************* DO NOT ALTER ANYTHING BELOW THIS LINE ! **************/
	s_code = s.t();
	if (s_code) document.write(s_code);
}


function rssTracking(ObjOmni)
{
    s.pageName=ObjOmni.pg 
    s.server=ObjOmni.server
    s.channel=ObjOmni.ch
    s.prop1=ObjOmni.p1
    s.prop2=ObjOmni.p2
    s.prop3=ObjOmni.p3
    s.prop4=ObjOmni.p4 
    s.prop5=ObjOmni.p5
    s.prop6=ObjOmni.p6
    s.prop7=ObjOmni.p7
    /* Hierarchy Variables */
    s.hier1=ObjOmni.hier 
    
    s.eVar25=ObjOmni.rss;
    s.events='event11';
    s.linkTrackVars='eVar25,events';
    s.linkTrackEvents='event11';
    s.tl(this,'o','RSS subscription');
                                     
    /************* DO NOT ALTER ANYTHING BELOW THIS LINE ! **************/
	s_code = s.t();
	if (s_code) document.write(s_code);
}

