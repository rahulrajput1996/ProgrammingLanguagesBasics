console.log("working");

const myset1=new Set();
console.log(myset1);

myset1.add("this");   
myset1.add("this");   
myset1.add(346);
myset1.add(true);
myset1.add({a:3,b:5});
console.log(myset1);
console.log(myset1.size);
console.log(myset1.has("this"));

let myset2=new Set(["rahul",1000,{c:10,d:11},1000]);
console.log(myset2);
console.log(myset2.size);
console.log(myset2.has("payal"));

myset1.delete(346);
console.log(myset1);
myset2.delete("rahul");
console.log(myset2);

//iterate the set
for (const item of myset1) {
    console.log(item);
}

myset2.forEach(item => {
    console.log(item);
});

let myarr1=Array.from(myset1)
console.log(myarr1);
console.log(myarr1[1]);

let myarr2=Array.from(myset2)
console.log(myarr2);
console.log(myarr2[1]);









