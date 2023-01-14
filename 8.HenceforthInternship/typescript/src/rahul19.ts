function display(a: number, ...b: string[]) {
  console.log(a, b);
}
display(1, "rahul", "shivam");

let mynum = 123;
console.log((mynum as unknown as string).length);
