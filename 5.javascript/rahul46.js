console.log("regular exprssion regular");

// let regularExpressionLiteral=/harry/;  //syntax format
// regularExpressionLiteral=/harry/g;  //g means global
// regularExpressionLiteral=/harry/i;  //i means case insensitive
regularExpressionLiteral=/harry/ig;  // global and insensitive both

console.log(regularExpressionLiteral);
console.log(regularExpressionLiteral.source);

let sentence="is a HaRry and hArrY is a good boy ";

let result1=regularExpressionLiteral.exec(sentence);
console.log(result1);
console.log(result1.input);
console.log(result1.index);

let result2=regularExpressionLiteral.exec(sentence); /// can use multiple exec with global floag
console.log(result2);

let result3=regularExpressionLiteral.exec(sentence);
console.log(result3);
if(result3){
console.log(result3.input);
console.log(result3.index);
}

let result4=regularExpressionLiteral.test(sentence);
console.log(result4);    //will return true or false

let result5=sentence.match(regularExpressionLiteral); // ye ulta chlta h
console.log(result5);  // return array of matches or null

let result6=sentence.search(regularExpressionLiteral);
console.log(result6);  // return index of first match or -1

let result7=sentence.replace(regularExpressionLiteral,"shubham")
console.log(result7);