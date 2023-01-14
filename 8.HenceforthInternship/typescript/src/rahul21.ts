interface Point {
  x: number;
  y: number;
  z?: number;
}

//partial
let pointpart1: Partial<Point> = {};
console.log(pointpart1);
pointpart1.x = 10;
console.log(pointpart1);

//Required
let pointpart2: Required<Point> = {
  x: 11,
  y: 12,
  z: 13,
};
console.log(pointpart2);

//Record
let myobj1: Record<string, number> = {
  rahul: 13,
  ashish: 14,
};
console.log(myobj1);

//Omit
let distance: Omit<Point, "y" | "z"> = {
  x: 100,
};
console.log(distance);

//pick
let distance2: Pick<Point, "y"> = {
  y: 202,
};
console.log(distance2);

//Exclude
type primitivedetails = boolean | string | number;
const value: Exclude<primitivedetails, string> = true;
console.log(value);

//return type
type myfun1 = () => string;
const detail11: ReturnType<myfun1> = "khan4";
console.log(detail11);

type myfun2 = () => { x: number; y: string };
const detail12: ReturnType<myfun2> = {
  x: 300,
  y: "khan2",
};
console.log(detail12);

//parameter
type myfun3 = (a: number, b: string) => string;
const detail13: Parameters<myfun3>[0] = 1000;
console.log(detail13);
const detail14: Parameters<myfun3>[1] = "khan5";
console.log(detail14);

type myfun4 = (p: { x: number; y: string }) => { x: number; y: string };
const detail15: Parameters<myfun4>[0] = {
  x: 200,
  y: "khan6",
};
console.log(detail15);
