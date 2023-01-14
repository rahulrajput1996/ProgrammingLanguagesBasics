console.log("working");
let reg=/\war/; 
reg=/\w+ar/;
reg=/\War/;
reg=/\W+ar/;
reg=/\dnumber/;
reg=/\d+number/;
reg=/\Dnumber/;
reg=/\D+number/;
reg=/\sp ka number/;
reg=/\s+p ka number/;
reg=/\Sp ka number/;
reg=/\S+p ka number/;
reg=/4r5r\b/;
reg=/h(?=y)/;
reg=/h(?!y)/;

let str="it is %#$&arry bhai";
str="har 4cytfnumber";
str="he ramp ka number baba";
str="he is 4r5r#^# buitguf";
str="he is radhysh yamuna";

let result=reg.exec(str);
console.log(result);

if(reg.test(str)){
    console.log("matched");
}
else{
    console.log("not matched");
}