"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
function mydetailsdata(myobj) {
    console.log(myobj.name);
    console.log(myobj.age);
    console.log(myobj.address);
    return myobj;
}
console.log(mydetailsdata({ name: "ashish", age: 5, address: "asgarpur" }));
