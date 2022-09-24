let name1 = String(34);
console.log(name1, typeof name1);

let name2 = String(true);
console.log(name2, typeof name2);

let name3 = String(null);
console.log(name3, typeof name3);

let name4 = [1, 2, 3, 4, "harry"];
console.log(name4.length, typeof name4);
let name5 = String([1, 2, 3, 4, 7, "harry"]);
console.log(name5.length, typeof name5);

let i = 8;
console.log(typeof (i.toString()))

let name6 = Number("34we5")
console.log(name6, typeof name6);

let name7 = Number(true)
console.log(name7, typeof name7);

let name8 = Number([1, 2, 3, 4, 5])
console.log(name8, typeof name8);

let name9 = parseFloat(34.985)
console.log(name9, typeof name9)
console.log(name9.toFixed(6), typeof name9)

let mystr = "698";
let mynum = 34;
console.log(Number(mystr) + mynum)

let data1 = prompt("enter something");
console.log(typeof data1)
console.log(data1 + 3)

