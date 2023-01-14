console.log("working");
document.getElementById("main").addEventListener("click", function myfun(a) {
    console.log("click event fire");
    // location.href="https://www.google.com";
     let variable=a;
     variable=a.target;
     variable=a.target.className;
    //  variable=a.target.id;
    //  variable=a.offsetX
    //  variable=a.offsetY
    //  variable=a.clientX
    //  variable=a.clientY
    //  variable=Array.from(a.target.classList)

     console.log(variable);
})