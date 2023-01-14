let myterm;
myterm = "hello world";
let mylength1: number = (<string>myterm).length;
console.log(mylength1);
let mylength2: number = (myterm as string).length;
console.log(mylength2);

