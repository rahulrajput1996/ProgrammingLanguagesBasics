console.log("working");
let obj = {
    name: "rahul",
    salary: 1000,
    city : function () {
        console.log("running");
    }
}
console.log(obj);
console.log(obj.name);
console.log(obj.salary);
console.log(obj.city()); 

function generalobj (givenname,givensalary){
    this.name=givenname,
    this.salary=givensalary,
    this.city=function(){
        console.log(`${this.name} is running`);
    }
}
let ans1=new generalobj("rahul",2000);
console.log(ans1);
console.log(ans1.name);
console.log(ans1.salary);
console.log(ans1.city());

let ans2=new generalobj("sumit",1000);
console.log(ans2);
console.log(ans2.name);
console.log(ans2.salary);
console.log(ans2.city());