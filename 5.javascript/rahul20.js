console.log("working");

let city=["mumbai","chennai",420]

//this will available after exit current session and will add key-pair inside local storage
localStorage.setItem("name","rahul");
localStorage.setItem("salary",2000);
localStorage.setItem("arraydream", JSON.stringify(city));

console.log(localStorage.getItem("name"));
console.log(typeof localStorage.getItem("name"))

console.log(localStorage.getItem("salary"));
console.log(typeof localStorage.getItem("salary"))

console.log(JSON.parse(localStorage.getItem("arraydream")));
console.log(typeof JSON.parse(localStorage.getItem("arraydream")))

localStorage.removeItem("salary");
// localStorage.clear();

//this will active only in current session
sessionStorage.setItem("namesession","sessionrahul");
sessionStorage.setItem("salarysession",4000);
sessionStorage.setItem("arraydreamsession", JSON.stringify(city));

