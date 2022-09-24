console.log("i am here");
let name1=document.getElementById("navbar1");
console.log(name1);
name1.style.color="green"
console.log(name1.innerHTML);
console.log(name1.innerText);
let ans= name1.className;
 ans= name1.childNodes;
 ans= name1.parentNode;
console.log(ans);

let name2=document.querySelector("div");
console.log(name2);
name1.style.color="red"

let name3=document.getElementsByClassName("item")
console.log(name3[5]);
name3[3].innerHTML="<h4>myself</h4>";
Array.from(name3).forEach(Element=>{
    Element.innerText="my para";
})

let name4=document.getElementsByTagName("li")
console.log(name4[2]);

let name5=document.querySelectorAll("div");
console.log(name5);
