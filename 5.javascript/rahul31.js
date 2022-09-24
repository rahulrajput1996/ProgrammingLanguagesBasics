console.log("working");
class employee {
    constructor(givenname, givensalary, givengrad) {
        this.name = givenname;
        this.salary = givensalary;
        this.grad = givengrad;
    }
    slogan() {
        return `i am ${this.name}`;
    }
    static add(a, b) {
        return a + b;
    }
}

let ans1 = new employee("harry", 2000, "Agrad");
console.log(ans1);
console.log(ans1.name);
console.log(ans1.slogan());

console.log(employee.add(3, 7));

class programmer extends employee {
    constructor(givenname, givensalary, givengrad, glangauge) {
        super(givenname, givensalary, givengrad)
        this.langauge = glangauge;
    }

        favouritelangauge() {
            return `fav language is ${this.langauge}`;
        }

        static multiply(a, b) {
        return a * b;
    }
}
let ans2= new programmer("rahul",1000,"Cgrade","python");
console.log(ans2);
console.log(ans2.name);
console.log(ans2.langauge);
console.log(ans2.favouritelangauge());
console.log(ans2.slogan());
console.log(programmer.multiply(3,5));