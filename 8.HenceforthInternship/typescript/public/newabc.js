"use strict";
class Person10 {
    constructor(age, firstName, lastName) {
        this._age2 = age;
        this._firstName2 = firstName;
        this._lastName2 = lastName;
    }
    get age2() {
        return this._age2;
    }
    set age2(theAge) {
        if (theAge <= 0 || theAge >= 200) {
            throw new Error("The age is invalid");
        }
        this._age2 = theAge;
    }
    getFullName() {
        return `${this._firstName2} ${this._lastName2}`;
    }
}
let a10 = new Person10(20, "John", "raja");
a10.age2 = 10;
console.log(a10.age2);
