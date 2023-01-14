console.log("working");

function* numgen() {
    let i=0;
    yield 1;
    yield 2;
    yield 3;
    yield 4;
    // while (true) {
    //     yield i++;
    //     // yield (i++).toString();
    // }
}

const result =numgen();
console.log(result.next());
console.log(result.next().value);
console.log(result.next().done);
console.log(result.next());
console.log(result.next());
