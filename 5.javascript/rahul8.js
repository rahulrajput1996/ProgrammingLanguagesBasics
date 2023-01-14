let age = 20;
if (age !== 30) {
    console.log("your age is 30")
}
else if (age === 40) {
    console.log("your age is 40")
}
else if (age === '50') {
    console.log("your age is 50")
}
else {
    console.log("unknown age");
}

age >= 30 ? console.log("yes") : console.log("no");

console.log(age >=30 ? "yes": "no");

let num1 =Number(prompt("enter num1"));
let num2 =Number(prompt("enter num2"));
let num3 =Number(prompt("enter num3"));
 if ((num1>num2) && (num1 > num3)){
     console.log("num1 is greatest")
 }
 else if (num2>num3){
    console.log("num2 is greatest")
 }
 else {
    console.log("num3 is greatest")
 }
