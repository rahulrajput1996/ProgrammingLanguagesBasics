console.log("working");
let reg=/h[p-z]rry[a-z][0-9][3-7][Def][^Ghi][a-zA-Z][yu0-9]/  //character sets--[]

//quantifiers ---{}
reg=/har{2}y/;  // exactly two times 
reg=/har{0,3}y/;  //either 0/1/2/3

// groupings--()
reg=/(har){1,3}([0-9]pq){0,2}/

let str="hqrryp84Dpuy bhai";
str="harrry";
str="harharhar9pq7pq";

let result=reg.exec(str);
console.log(result);

if(reg.test(str)){
    console.log("matched");
}
else{
    console.log("not matched");
}