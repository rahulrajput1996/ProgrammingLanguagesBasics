let cl = document.links;
console.log(cl);
let str = "java"
Array.from(cl).forEach(element => {
    let ans = element.href;
    // console.log(ans);
    if (ans.includes(str)) {
        console.log(ans);
    }
});