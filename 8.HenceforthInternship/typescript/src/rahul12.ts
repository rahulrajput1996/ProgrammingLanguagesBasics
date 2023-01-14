class Employee {
  public firstName: string;
  protected lastName: string;
  protected age: number;
  protected gender: string;

  constructor(
    firstName: string,
    lastName: string,
    age: number,
    gender: string
  ) {
    this.firstName = firstName;
    this.lastName = lastName;
    this.age = age;
    this.gender = gender;
  }

  getdata() {
    return `${this.firstName} ${this.lastName} is ${this.age} years old with ${this.gender}`;
  }
}

class Programmer extends Employee {
  public exp: number;
  private language: string = "English";
  constructor(
    fs: string,
    ls: string,
    age: number,
    gender: string,
    exp: number,
    language: string = "C"
  ) {
    super(fs, ls, age, gender);
    this.language = language;
    this.exp = exp;
  }
  getdata() {
    return `${this.firstName} ${this.lastName} is ${this.age} years old with ${this.gender} and ${this.exp} and ${this.language}`;
  }
}

let a1 = new Employee("rahul", "singh", 10, "male");
console.log(a1.getdata());
console.log(a1.firstName);

let a2 = new Programmer("shivani", "rajput", 20, "female", 2, "java");
console.log(a2.getdata());
console.log(a2.firstName);
console.log(a2.exp);

export {};
