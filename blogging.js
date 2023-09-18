
function toggle(){
    var checked = document.getElementById("chk").checked;
    console.log("hi there")

    if (checked){
        console.log("checked");
        document.getElementById('nav_ul').className = 'show_menu';
    }
    else {
        console.log("unchecked");
        document.getElementById('nav_ul').className = 'nav_ul';
    }
    
}

function tog(){
    var checked = document.getElementById("chk").checked;
    console.log("hi there")

    if (checked){
        console.log("checked");
        document.getElementById('nav').className = 'show_n';
    }
    else {
        console.log("unchecked");
        document.getElementById('nav').className = 'nav';
    }
    
}






