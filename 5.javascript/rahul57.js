console.log("working");

const mymap = new Map();
const key1 = "harry", key2 = {}, key3 = function () { };

mymap.set(key1, "first item");
mymap.set(key2, {name:"ph",virus:"delta"});
mymap.set(key3, "third item");

console.log(mymap);
console.log(mymap.size);
console.log(mymap.keys())
console.log(mymap.values());

let myvalue1=mymap.get(key1);
console.log(myvalue1);
let myvalue2=mymap.get(key2);
console.log(myvalue2);
let myvalue3=mymap.get(key3);
console.log(myvalue3);

for (const [key,value] of mymap) {
    console.log(key,value);
}

for (const key of mymap.keys()) {
    console.log(key);
}

for (const value of mymap.values()) {      
    console.log(value);  
}

mymap.forEach((value,key) => {
    console.log(key);
    console.log(value)
});

let myarr1=Array.from(mymap);
console.log(myarr1);
let myarr2=Array.from(mymap.keys());
console.log(myarr2);
let myarr3=Array.from(mymap.values());
console.log(myarr3);