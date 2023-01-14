"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
class Employee {
    constructor(firstName, lastName, age, gender) {
        this.firstName = firstName;
        this.lastName = lastName;
        this.age = age;
        this.gender = gender;
    }
    getdata() {
        return `${this.firstName} ${this.lastName} is ${this.age} years old with ${this.gender}`;
    }
}
class Programmer extends Employee {
    constructor(fs, ls, age, gender, exp, language = "C") {
        super(fs, ls, age, gender);
        this.language = "English";
        this.language = language;
        this.exp = exp;
    }
    getdata() {
        return `${this.firstName} ${this.lastName} is ${this.age} years old with ${this.gender} and ${this.exp} and ${this.language}`;
    }
}
let a1 = new Employee("rahul", "singh", 10, "male");
console.log(a1.getdata());
console.log(a1.firstName);
let a2 = new Programmer("shivani", "rajput", 20, "female", 2, "java");
console.log(a2.getdata());
console.log(a2.firstName);
console.log(a2.exp);
