function createPair<S, T = number>(a: S, b: T): [S, T] {
  return [a, b];
}
console.log(createPair<string, string>("rahul", "abc"));

function createPair2<S extends string | number, T = number | string | number[]>(
  a: S,
  b: T
): [S, T] {
  return [a, b];
}
console.log(createPair2("ab", [1, 2]));

class Employee2<T1, T2 = number> {
  public fs: T1;
  public ls: T2;
  constructor(fs: T1, ls: T2) {
    this.fs = fs;
    this.ls = ls;
  }
  getdata(): [T1, T2] {
    return [this.fs, this.ls];
  }
}

let a1 = new Employee2<string>("rahul", 10);
console.log(a1.getdata());

type a1<T> = { name: T };
const detail: a1<number> = { name: 12 };
console.log(detail);
