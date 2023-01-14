"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
function fun1(fs, ls) {
    console.log(fs, ls);
}
fun1("rahul", "rajput");
function fun2(fs, ls) {
    console.log(fs, ls);
    return fs + ls;
}
console.log(fun2("rahul", "kumar"));
function fun3(myobj) {
    console.log(myobj.fs, myobj.ls);
    return myobj.fs + myobj.ls;
}
console.log(fun3({ fs: "rahul", ls: "mahiyan" }));
