let myterm;
myterm = "hello world";
let length1: number = (<string>myterm).length;
console.log(length1);
let length2: number = (myterm as string).length;
console.log(length2);
export{}

