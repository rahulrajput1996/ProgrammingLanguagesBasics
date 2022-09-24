console.log("working");

async function harry() {
    console.log("second");
    const response = await fetch('https://api.github.com/users');
    console.log("fifth");
    const users = await response.json();
    console.log('sixth');
    return users;

}
console.log("first");
let a = harry();
console.log('third');
console.log(a);
a.then((data) => {
    console.log(data);
});
console.log("fourth");