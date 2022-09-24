console.log("working");

let people = ["harry", "mohan", "rajesh", "shyam"];
console.log(people);
let employee = {
    name: "gopal",
    salary: 5000,
    "channel konsa": "code with harry"
}
console.log(employee);

let sentence = "I am a good boy";
console.log(sentence);

//how to read generally
console.log(people[2]);

console.log(employee.name);
console.log(employee["salary"]);
console.log(employee["channel konsa"]);

console.log(sentence[3]);
//how to read by for loop
for (let index = 0; index < people.length; index++) {
    const element = people[index];
    console.log(element);
}

for (let index = 0; index < sentence.length; index++) {
    const element = sentence[index];
    console.log(element);
}

for (let index = 0; index < employee.length; index++) {
    const element = employee[index];
    console.log(element);
}

//how to read by for of loop
for (const element of people) {
    console.log(element);
}
// for (const element of employee) {
//     console.log(employee.element);
// }
for (const element of sentence) {
    console.log(element)
}
//how to read by for in loop
for (const key in people) {
    console.log(key);
    console.log(people[key]);
}
for (const key in employee) {
    console.log(key);
    console.log(employee[key]);
}
for (const key in sentence) {
    console.log(key);
    console.log(sentence[key]);
}
//how to read by for each loop
people.forEach(element => {
    console.log(element);
});






