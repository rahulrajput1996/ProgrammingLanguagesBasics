let a = "rahul";
console.log(a);
let b: number = 10;
console.log(b);
let c: unknown = 20;
console.log(c);
c = "rajat";
console.log(c);
let d: readonly number[] = [10, 20];
console.log(d);
// d.push(4);  will give error
// console.log(d);
let data: [string, number] = ["shivam", 100];
console.log(data);
data.push(3);
console.log(data);
const graph: [x: number, y: string] = [10, "shivam"];
console.log(graph);

const data2: [number, number] = [101, 111];
const [x, y] = data2;
console.log(x, y);
