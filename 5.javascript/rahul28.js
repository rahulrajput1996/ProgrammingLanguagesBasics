console.log("working");
let obj1={
    vill:"asgarpur",
    city:"bijnor",
    nation:"india"
};
console.log(obj1);
console.log(obj1.vill);

function genobj(givenvill,givencity,givennation){
    this.vill=givenvill,
    this.city=givencity,
    this.nation=givennation
}
let ans1=new genobj("angakheri","moradavbad","australia")
console.log(ans1);

genobj.prototype.getv=function(){
    return this.city;
}
console.log(ans1.getv())

genobj.prototype.putv=function(thevillage,thecity,thenation){
    this.vill=thevillage,
    this.city=thecity,
    this.nation=thenation
}
ans1.putv("abc","def","ghi")
console.log(ans1.vill)
console.log(ans1.getv())
