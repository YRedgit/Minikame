const String web_page1 = " \
<!-- saved from url=(0067)file:///C:/Users/Yohann-Elsa/Downloads/Minikame%20Web%20Server.html --> \
<html> \
<head> \
 <meta http-equiv=\"cache-control\" content=\"no-cache, must-revalidate, post-check=0, pre-check=0\"> \
 <meta http-equiv=\"expires\" content=\"Sat, 31 Oct 2014 00:00:00 GMT\"> \
 <meta http-equiv=\"pragma\" content=\"no-cache\"> \
 <meta http-equiv=\"Content-Type\" content=\"text/html; charset=windows-1252\">  \
 <meta charset=\"utf-8\"> \
 <meta name=\"viewport\" content=\"width=device-width, initial-scale=0.65, maximum-scale=0.65, user-scalable=0\" /> \
 <title> Minikame Web Server </title> \
</head> \
<body> \
  <h1> MiniKame </h1> \
  <style type=\"text/css\"> \
    h1 { \
      color:black; \
      position: absolute; \
      right: 5%; \
      font-size:200% \
  } \
 \
    body { \
      color: black; \
      background-image:url(\"https://pbs.twimg.com/media/CZKjmo9W0AAdQL3.jpg\"); \
      background-size: 2000px; \
    background-repeat: repeat-y; \
    } \
 \
    input[type=text], select { \
      width: 100%; \
      padding: 12px 20px; \
      margin: 8px 0; \
      display: inline-block; \
      border: 1px solid \#ccc; \
      border-radius: 4px; \
      box-sizing: border-box; \
   } \
 \
   input[type=submit], select { \
   top:10px; \
     width: 33%; \
     padding: 12px 20px; \
     margin: 8px 0; \
     display: inline-block; \
     border: 1px solid \#ccc; \
     border-radius: 4px; \
     box-sizing: border-box; \
   } \
 \
   \#Left { \
     background:lightblue; \
     border-radius: 30px; \
     width: 45%; \
     height: 20%; \
     position:absolute; \
     left:4%; \
   top: 34%; \
   font-size: 220%; \
   opacity:0.8; \
   } \
 \
   \#Right { \
     background:lightblue; \
     border-radius: 30px; \
     width: 45%; \
     height: 20%; \
     position:absolute; \
     left:51%; \
   top: 34%; \
   font-size: 220%; \
   opacity:0.8; \
   } \
 \
   \#Fw { \
     background:lightblue; \
     border-radius: 30px; \
     width: 50%; \
     height: 20%; \
     position:absolute; \
     left:25%; \
   top:13%; \
   font-size: 220%; \
   opacity:0.8; \
   } \
 \
   \#Bw { \
     background:lightblue; \
     border-radius: 30px; \
     width: 50%; \
     height: 20%; \
     position:absolute; \
     left:25%; \
   top: 55%; \
   font-size: 220%; \
   opacity:0.8; \
   } \
 \
   \#Auto { \
     background:lightgreen; \
     border-radius: 30px; \
     width: 50%; \
     height: 11%; \
     position:absolute; \
     left:25%; \
   top: 76%; \
   font-size: 220%; \
   opacity:0.8; \
   } \
 \
   \#Tricks { \
     background:red; \
     border-radius: 100%; \
     width: 100px; \
     height: 100px; \
     position:absolute; \
     left:1%; \
   top: 77%; \
   font-size: 220%; \
   opacity:0.8; \
   } \
   ";



const String web_page2 =  " \
   footer { \
     color: blue; \
     position:absolute; \
     bottom:12; \
     width:95%; \
     height:70px;   /* Height of the footer */ \
     background:\#888; \
     opacity:0.8; \
     border-radius: 30px; \
   } \
 \
   p1 { \
     display: block; \
     margin:3px 0; \
     text-align: center; \
   } \
 \
   p { \
     position: absolute; \
     left: 5%; \
     Bottom: 10px; \
   } \
  </style> \
 \
  <div id=\"dir\"> \
    <input type=\"submit\" value=\"Switch mode\" onclick=\"window.location='?/page1';\" > \
    <a href=\"?/Left\"><button id=\"Left\" onclick=\"myFunction(\&\#39;Left\&\#39;)\" value=\"Left\">Left</button></a> \
    <a href=\"?/Right\"><button id=\"Right\" onclick=\"myFunction(\&\#39;Right\&\#39;)\" value=\"Right\">Right</button></a> \
    <a href=\"?/Forward\"><button id=\"Fw\" onclick=\"myFunction(\&\#39;Fw\&\#39;)\" value=\"Forward\"> Forward</button></a> \
    <a href=\"?/Backward\"><button id=\"Bw\" onclick=\"myFunction(\&\#39;Bw\&\#39;)\" value=\"Backward\">Backward</button></a> \
    <a href=\"?/Auto\"><button id=\"Auto\" onclick=\"myFunction(\&\#39;Auto\&\#39;)\" value=\"Auto\">Auto-pattern</button></a> \
    <a href=\"?/page2\"><button id=\"Tricks\">Tricks</button></a> \
  </div> \
   \
  <p id=\"direction\"></p> \
 \
  <script> \
    function myFunction(bt) { \
      document.getElementById(\"direction\").innerHTML = \"Going:\" + document.getElementById(bt).value; \
    } \
  </script> \
   \
  <footer> \
    <p1> Created by: Yred</p1> \
    <p1> Need support? Please visit: <a href=\"https://github.com/YRedgit/Minikame\"> \
    Yredgit</a>.</p1> \
    <p1> Contact information: <a href=\"mailto:Support@yred.com\"> \
    support@yred.com</a>.</p1> \
  </footer> \
</body> \
</html> ";








 







const String web_page3 =  " \
<!-- saved from url=(0067)file:///C:/Users/Yohann-Elsa/Downloads/Minikame%20Web%20Server.html --> \
<html> \
<head> \
 <meta http-equiv=\"Content-Type\" content=\"text/html; charset=windows-1252\">  \
 <meta charset=\"utf-8\"> \
 <meta name=\"viewport\" content=\"width=device-width, initial-scale=0.65, maximum-scale=0.65, user-scalable=0\" /> \
 <title> Minikame Web Server </title> \
</head> \
<body> \
  <h1> MiniKame </h1> \
  <style type=\"text/css\"> \
    h1 { \
      position: absolute; \
      right: 5%; \
      font-size:200% \
  } \
 \
    body { \
      color: black; \
      background-image:url(\"https://pbs.twimg.com/media/CZKjmo9W0AAdQL3.jpg\"); \
      background-size: 2000px; \
    background-repeat: repeat-y; \
    } \
 \
    input[type=text], select { \
      width: 100%; \
      padding: 12px 20px; \
      margin: 8px 0; \
      display: inline-block; \
      border: 1px solid \#ccc; \
      border-radius: 4px; \
      box-sizing: border-box; \
   } \
 \
     input[type=password], select { \
      width: 100%; \
      padding: 12px 20px; \
      margin: 8px 0; \
      display: inline-block; \
      border: 1px solid \#ccc; \
      border-radius: 4px; \
      box-sizing: border-box; \
   } \
 \
   label { \
     font-size:250%; \
   } \
 \
   input[type=submit], select { \
     top:10px; \
     width: 33%; \
     padding: 12px 20px; \
     margin: 8px 0; \
     display: inline-block; \
     border: 1px solid \#ccc; \
     border-radius: 4px; \
     box-sizing: border-box; \
  } \
";

const String web_page4 =  " \
  footer { \
     color: blue; \
     position:absolute; \
     bottom:12; \
     width:95%; \
     height:70px;   /* Height of the footer */ \
     background:\#888; \
     opacity:0.8; \
     border-radius: 30px; \
   } \
    \
  p1 { \
    display: block; \
    margin:3px 0; \
    text-align: center; \
  } \
  p { \
    position: absolute; \
    left: 5%; \
    Bottom: 10px; \
  } \
 \
  </style> \
   \
  <div> \
    <input type=\"submit\" value=\"Switch mode\" onclick=\"window.location='?/index';\" >   \
    <form action=\"\"> \
      <label for=\"Wname\">Wifi Network </label> \
      <input type=\"text\" name=\"Wname\" name=\"wifinetwork\" ><br> \
      <label for=\"Wpass\">Wifi Password </label> \
      <input type=\"password\" name=\"Wpass\" name=\"wifipassword\"  class=\"showpassword\"><br> \
      <input type=\"checkbox\" id=\"showhide\" onchange=\"showHide(this)\">Show password<br> \
      <label for=\"Wip\">Wifi ip </label> \
      <input type=\"text\" name=\"Wip\" name=\"wifiip\" ><br> \
      <input type=\"submit\" value=\"Submit\"> \
    </form> \
  </div> \
 \
  <p id=\"direction\"></p> \
 \
<script> \
function show() \
{ \
var p = document.getElementById('Wpass'); \
p.setAttribute('type','text'); \ 
} \
\
function hide() \
{ \
   var p = document.getElementById('Wpass'); \
p.setAttribute('type','password'); \   
} \
\
function showHide(cb) \
{ \
    var pwShown = cb.checked; \
\
document.getElementById(\"showhide\").addEventListener(\"click\", function() { \
    if (pwShown == 0) \
    {\
        show();\
    } \
    else { \
        hide(); \
    } \
            }, false);\
\
} \
</script> \
  \
  <footer> \
    <p1> Created by: Yred</p1> \
    <p1> Need support? Please visit: <a href=\"https://github.com/YRedgit/Minikame\"> \
    Yredgit</a>.</p1> \
    <p1> Contact information: <a href=\"mailto:Support@yred.com\"> \
    support@yred.com</a>.</p1> \
  </footer> \
</body> \
</html> \
";

























const String web_page5 =  " \
<!-- saved from url=(0067)file:///C:/Users/Yohann-Elsa/Downloads/Minikame%20Web%20Server.html --> \
<html> \
<head> \
 <meta http-equiv=\"Content-Type\" content=\"text/html; charset=windows-1252\">  \
 <meta charset=\"utf-8\"> \
 <meta name=\"viewport\" content=\"width=device-width, initial-scale=0.65, maximum-scale=0.65, user-scalable=0\" /> \
 <title> Minikame Web Server </title> \
</head> \
<body> \
  <h1> MiniKame </h1> \
  <style type=\"text/css\"> \
    h1 { \
      position: absolute; \
      right: 5%; \
      font-size:200% \
  } \
 \
    body { \
      color: black; \
      background-image:url(\"https://pbs.twimg.com/media/CZKjmo9W0AAdQL3.jpg\"); \
      background-size: 2000px; \
    background-repeat: repeat-y; \
    } \
 \
   input[type=submit], select { \
   top:10px; \
     width: 33%; \
     padding: 12px 20px; \
     margin: 8px 0; \
     display: inline-block; \
     border: 1px solid \#ccc; \
     border-radius: 4px; \
     box-sizing: border-box; \
   } \
 \
   \#Pushup  { \
     background:lightblue; \
     border-radius: 30px; \
     width: 40%; \
     height: 20%; \
     position:absolute; \
     left:7%; \
   top: 10%; \
   font-size: 220%; \
   opacity:0.8; \
   } \
    \#Updown { \
     background:lightblue; \
     border-radius: 30px; \
     width: 40%; \
     height: 20%; \
     position:absolute; \
     left:53%; \
   top: 10%; \
   font-size: 220%; \
   opacity:0.8; \
   } \
      \#Frontback  { \
     background:lightblue; \
     border-radius: 30px; \
     width: 40%; \
     height: 20%; \
     position:absolute; \
     left:7%; \
   top: 32%; \
   font-size: 220%; \
   opacity:0.8; \
   } \
 \
      \#Hello  { \
     background:lightblue; \
     border-radius: 30px; \
     width: 40%; \
     height: 20%; \
     position:absolute; \
     left:7%; \
   top: 54%; \
   font-size: 220%; \
   opacity:0.8; \
   } \
 \
      \#Dance  { \
     background:lightblue; \
     border-radius: 30px; \
     width: 40%; \
     height: 20%; \
     position:absolute; \
     left:53%; \
   top: 32%; \
   font-size: 220%; \
   opacity:0.8; \
   } \
";
const String web_page6 =  " \
     \#Home  { \
     background:lightblue; \
     border-radius: 30px; \
     width: 40%; \
     height: 20%; \
     position:absolute; \
     left: 53%; \
   top: 54%; \
   font-size: 220%; \
   opacity:0.8; \
   } \
   \#Back { \
     background:red; \
     border-radius: 100%; \
     width: 100px; \
     height: 100px; \
     position:absolute; \
     left:1%; \
   top: 77%; \
   font-size: 220%; \
   opacity:0.6; \
   } \
 \
   footer { \
     color: blue; \
     position:absolute; \
     bottom:12; \
     width:95%; \
     height:70px;   /* Height of the footer */ \
     background:\#888; \
     opacity:0.8; \
     border-radius: 30px; \
   } \
    \
  p1 { \
    display: block; \
    margin:3px 0; \
    text-align: center; \
  } \
  p { \
    position: absolute; \
    left: 5%; \
    Bottom: 10px; \
  } \
 \
  </style> \
   \
 \
  <div id=\"dir\"> \
    <input type=\"submit\" value=\"Switch mode\" onclick=\"window.location='?/page1';\" > \
    <a href=\"?/Pushup\"><button id=\"Pushup\" value=\"PushUp\">PushUp</button></a> \
    <a href=\"?/Updown\"><button id=\"Updown\" value=\"Updown\">UpDown</button></a> \
    <a href=\"?/Hello\"><button id=\"Hello\" value=\"Hello\">Hello</button> \
    <a href=\"?/Frontback\"><button id=\"Frontback\" value=\"Frontback\">FrontBack</button> \
    <a href=\"?/Dance\"><button id=\"Dance\" value=\"Dance\">Dance</button> \
    <a href=\"?/Home\"><button id=\"Home\" value=\"Home\">Home</button> \
    <a href=\"?/index\"><button id=\"Back\">Back</button></a> \
  </div> \
 \
  \
  <footer> \
    <p1> Created by: Yred</p1> \
    <p1> Need support? Please visit: <a href=\"https://github.com/YRedgit/Minikame\"> \
    Yredgit</a>.</p1> \
    <p1> Contact information: <a href=\"mailto:Support@yred.com\"> \
    support@yred.com</a>.</p1> \
  </footer> \
</body> \
</html> \
";
    
