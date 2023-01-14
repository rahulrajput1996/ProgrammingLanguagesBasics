interface Person {
  name: string;
  age: number;
}
function display3(a1: Person, property: keyof Person) {
  console.log(property, a1[property]);
}
let details = {
  name: "John",
  age: 30,
};
display3(details, "name");
display3(details, "age");
