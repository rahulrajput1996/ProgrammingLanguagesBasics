let mybin: number = 0b1001;
let myoct: number = 0o12307;
let myhex: number = 0x1230f1;
console.log(mybin, myoct, myhex);

let myobj: object = {
  name: "rahul",
  section: "basic",
};
console.log(myobj);
console.log(Object.keys(myobj));

let myvariable: any;
console.log(myvariable);

let mousemovement: "click" | "dblclick";
mousemovement = "click";
console.log(mousemovement);
mousemovement = "dblclick";
console.log(mousemovement);

interface A {
  name: string;
  age: number;
}

interface B {
  name: string;
  year: number;
}

type a5 = A & B;
let myobj5: a5 = {
  name: "rahul rajput",
  age: 2,
  year: 2023,
};
console.log(myobj5);
