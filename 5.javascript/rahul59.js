console.log("working");

const sym1 = Symbol("my identifier");
const sym2 = Symbol("my identifier");

console.log(sym1);
console.log(sym2);
console.log(typeof sym1);
console.log(typeof sym2);

console.log(sym1 === sym2);
console.log(null === null);

const sym3 = Symbol("identifier for sym3");
const sym4 = Symbol("identifier for sym4");

myobj = {};
myobj[sym3] = "harry";
myobj[sym4] = 1000;
myobj["name"] = "don bhai ";
myobj[500] = "madam";

console.log(myobj);
console.log(myobj[sym3]);

console.log(myobj.sym3);
console.log(myobj["sym3"]);

console.log(myobj.name);
console.log(myobj["name"]);

console.log(myobj[500]);

for (const key in myobj) {
    console.log(key, myobj[key]);
}

console.log(JSON.stringify(myobj));
