console.log("working");
let a = 10;
let b = 15;
[a, b] = [b, a];
console.log(a, b);

//array destructure
[a, b, c, d] = [1, 2, 3, 4, 5, 6, 7, 8, 9];
console.log(a, b, c, d);

[a, b, c, ...d] = [1, 2, 3, 4, 5, 6, 7, 8, 9];
console.log(a, b, c, d);

const fruits = ["apple", "mango", "orange", "grapes"];
[a, b, ...c] = fruits
console.log(a, b, c);

({ a, b, c, ...d } = { a: 1, b: 2, c: 3, d: 4, e: 5 })
console.log(a, b, c, d);

//object destructure
const employee = {
    salary: 300,
    gender: "male",
    start: function () {
        console.log("started");
    }
}
const {salary,gender,start}=employee;
console.log(salary,gender,start)
start();
