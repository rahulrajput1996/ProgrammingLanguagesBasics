console.log("working");

let reg=/^hardy/;
reg=/hardy$/;
reg=/h.ardy/;
reg=/h\*ardy/;
reg=/ha?rdyt?p/;
reg=/t*ardyx/;

let str="hardy hpardy tfvvvqardyx hrdytp h*ardy hardy";

let result=reg.exec(str);
console.log(result);

if(reg.test(str)){
    console.log("matched");
}
else{
    console.log("not matched");
}