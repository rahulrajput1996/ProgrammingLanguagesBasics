"use strict";
class Employee {
    getrole() {
        console.log("i am a employee");
    }
}
class Programmer {
    getexp() {
        console.log("i am a programmer with experience");
    }
}
function getinstance1(q) {
    return q instanceof Employee;
}
function getsomething(p) {
    if (getinstance1(p)) {
        p.getrole();
    }
    if (p instanceof Programmer) {
        p.getexp();
    }
    if ("getrole" in p) {
        p.getrole();
    }
    if ("getexp" in p) {
        p.getexp();
    }
    return "i am nothing";
}
let p1 = new Employee();
let p2 = new Programmer();
console.log(getsomething(p1));
console.log(getsomething(p2));
