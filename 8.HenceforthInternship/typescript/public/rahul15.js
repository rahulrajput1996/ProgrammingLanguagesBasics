"use strict";
function createPair(a, b) {
    return [a, b];
}
console.log(createPair("rahul", "abc"));
function createPair2(a, b) {
    return [a, b];
}
console.log(createPair2("ab", [1, 2]));
class Employee2 {
    constructor(fs, ls) {
        this.fs = fs;
        this.ls = ls;
    }
    getdata() {
        return [this.fs, this.ls];
    }
}
let a1 = new Employee2("rahul", 10);
console.log(a1.getdata());
const detail = { name: 12 };
console.log(detail);
