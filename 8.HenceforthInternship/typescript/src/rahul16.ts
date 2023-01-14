type name = string;
type age = number;
type detail = {
  call: name;
  year: age;
};
const name1: name = "rahul";
const age1: age = 10;
const detail1: detail = {
  call: name1,
  year: age1,
};
console.log(detail1);

interface Rectangle {
  height: number;
}
interface colouredRectangle extends Rectangle {
  color: string;
}
const obj1: colouredRectangle = {
  height: 10,
  color: "red",
};
console.log(obj1);
