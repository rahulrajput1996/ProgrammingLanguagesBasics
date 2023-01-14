let myobj1 = {
  name: "John",
  age: 20,
  address: "bengal",
};
console.log(myobj1);
console.log(myobj1.name);
console.log(myobj1.age);
console.log(myobj1.address);
myobj1.name = "vaibhav";
myobj1.age = 10;
myobj1.address = "guwahati";
// myobj1.email = "john@gmail.com";
console.log(myobj1);

interface User {
  name: string;
  age: number;
  address: string;
}
let myobj2: User = {
  name: "sharma",
  age: 20,
  address: "UP",
};
console.log(myobj2);
console.log(myobj2.name);
console.log(myobj2.age);
console.log(myobj2.address);

export {};
