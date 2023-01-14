let marks=[10,20,30,40,50];

marks.push("fruit");
console.log(marks);

marks.unshift("dj");
console.log(marks);

marks.pop();
console.log(marks);

marks.shift();
console.log(marks);

marks.reverse();
console.log(marks);

marks.splice(2,2)
console.log(marks);

let mark=["mohan","sohan"];
marks=marks.concat(mark);
console.log(marks);

console.log(marks[2]);

let num1=marks.indexOf("mohan");
console.log(num1);

let raja= new Array(12,66,829,123,62,22,39);
console.log(typeof raja)
console.log(Array.isArray(marks))
console.log(raja.sort())
