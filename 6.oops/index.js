class Student {
  constructor(favsub, favtech) {
    this.favouriteSubject = favsub;
    this.favouriteTechnology = favtech;
  }
  mychoice() {
    return `my best choice is ${this.favouriteTechnology}`;
  }
  static myadd(a, b) {
    return `the sum is ${a + b}`;
  }
}
let shubham = new Student("hindi", "reading");
console.log(shubham);
console.log(shubham.mychoice());
console.log(Student.myadd(5, 7));
class Teacher extends Student {
  constructor(favst, favsub, favtech) {
    super(favsub, favtech);
    this.favouriteStudent = favst;
  }
  myexperience() {
    return `${this.favouriteStudent} has ${this.favouriteSubject} with ${this.favouriteTechnology}`;
  }
  static mymultiply(c, d) {
    return `multiply is ${c * d}`;
  }
}
let vishnoi = new Teacher("ashish", "english", "focus");
console.log(vishnoi.myexperience());
console.log(vishnoi.mychoice());
console.log(Teacher.myadd(10, 20));
console.log(Teacher.mymultiply(10, 20));
