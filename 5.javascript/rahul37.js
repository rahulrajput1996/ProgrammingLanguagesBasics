console.log("working");

// this response is coming from server
const studentdata=[
    {name:"rahul", subject:"python"},
    {name: "aashu", subject:"java"}
];

function addstudent(namesub,callback){
    setTimeout(() => {
        studentdata.push(namesub);
        console.log("data add");
        callback();
    }, 5000);
}

function fetchstudent(){
    setTimeout(() => {
        let str=""
        studentdata.forEach(element => {
             str=str+`<li>${element.name}</li>`
        });
        console.log("data fetched")
        let str2= document.getElementById("student");
        str2.innerHTML=str;
    }, 1000);
}

newstudentdata={name: "lucky", subject:"c++"}
addstudent(newstudentdata,fetchstudent);
// fetchstudent();