const detail4: { name: string; age: number; year?: number } = {
  name: "rahul",
  age: 20,
};
console.log(detail4);
detail4.year = 2022;
console.log(detail4);

const myobj2: { [index: string | number]: number } = {};
myobj2.rahul = 10;
myobj2.shivam = 20;
// myobj2.30 = 40;  will give error
console.log(myobj2);
