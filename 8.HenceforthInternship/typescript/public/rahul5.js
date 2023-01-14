"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
const sumfun = (a, b = 10, c) => {
    console.log(c);
    return c ? a + b + c : a + b;
};
console.log(sumfun(3));
console.log(sumfun(10, 2));
console.log(sumfun(10, 2, 5));
