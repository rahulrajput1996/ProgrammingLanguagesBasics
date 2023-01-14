class Employee {
  getrole() {
    console.log("i am a employee");
  }
}

class Programmer {
  getexp() {
    console.log("i am a programmer with experience");
  }
}

type a2 = Employee | Programmer;

function getinstance1(q: any): q is Employee {
  return q instanceof Employee;
}

function getsomething(p: a2): string {
  if (getinstance1(p)) {
    p.getrole();
  }

  if (p instanceof Programmer) {
    p.getexp();
  }

  if ("getrole" in p) {
    p.getrole();
  }

  if ("getexp" in p) {
    p.getexp();
  }

  return "i am nothing";
}

let p1 = new Employee();
let p2 = new Programmer();

console.log(getsomething(p1));
console.log(getsomething(p2));
