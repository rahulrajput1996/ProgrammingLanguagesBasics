console.log("working");
let ans1=document.getElementById("btn1");
// ans1.addEventListener("click",myfun1);
// ans1.addEventListener("dblclick",myfun4);
// ans1.addEventListener("mousedown",myfun5);
// ans1.addEventListener("mouseup",myfun6);
// ans1.addEventListener("mouseenter",myfun7);
// ans1.addEventListener("mouseleave",myfun8);
ans1.addEventListener("mousemove",myfun9);

let ans2=document.getElementById("btn2");
ans2.addEventListener("click",myfun2);

let ans3=document.getElementById("btn3");
ans3.addEventListener("click",myfun3);

function myfun1(a){
    console.log("clickevent",a);
}

function myfun2(a){
    console.log("clickevent",a);
    a.preventDefault();
}

function myfun3(a){
    console.log("clickevent",a);
    a.preventDefault();
}

function myfun4(a){
    console.log("doubleclickevent",a);
}

function myfun5(a){
    console.log("mousedown",a);
}

function myfun6(a){
    console.log("mouseup",a);
}

function myfun7(a){
    console.log("mouseover",a);
}

function myfun8(a){
    console.log("mouseout",a);
}

function myfun9(a){
    console.log("mousemove",a);
    document.getElementById("myid").style.backgroundColor=`rgb(${a.clientX},${a.clientY},200`;
}
