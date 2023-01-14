console.log("tute16");

//creation
let ans1 = document.createElement('li');
ans1.className = "splitem";
ans1.id = "spl";
ans1.setAttribute("name", "rahulisname");
// ans1.innerText="this is spl para";
// ans1.innerHTML = "<b>this is spl para</b>"
let textinomial = document.createTextNode('rahul spl para');
ans1.appendChild(textinomial);
console.log(ans1);

//location where to fit
let lct = document.getElementById("nav");

//lets place now
lct.appendChild(ans1)

//lets create another one
let ans2 = document.createElement("h3");
ans2.className = "splitem2";
ans2.id = "spl2";
ans2.setAttribute("name", "rahulisname2");
let textinomial2 = document.createTextNode('rahul spl para2');
ans2.appendChild(textinomial2);
console.log(ans2)
// now replace it with before
ans1.replaceWith(ans2);

//replacing child now
let original = document.getElementById("nav");
original.replaceChild(ans1,document.getElementById("lui"));

//removing child from dom
original.removeChild(document.getElementById("fui"));

//remove attributes
ans2.removeAttribute("name");
console.log(ans2);

//has attributes boolean type
let ans3=original.hasAttribute('id');
console.log(ans3);