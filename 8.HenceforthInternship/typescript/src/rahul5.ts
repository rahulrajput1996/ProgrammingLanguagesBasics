const sumfun = (a: number, b: number = 10, c?: number): number => {
    console.log(c)
    return c?a + b+c:a+b;
}
console.log(sumfun(3));
console.log(sumfun(10, 2));
console.log(sumfun(10, 2,5));
export{}
