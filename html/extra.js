var extraInt = 100;
function extraonclick() {
    window.alert("在外部js函数中的响应");
    document.getElementById("extratargetbtn").innerHTML = "外部js响应";
}
var person = {
    name    : "john", 
    sex     : "男", 
    age     : 50, 
    eyecolor    : "black",
    fight   : function(anotherperson){
        window.alert("fight with "+anotherperson);
        console.log("fight with "+anotherperson);
    }};