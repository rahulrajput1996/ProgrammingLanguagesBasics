class Person10 {
  private _age2: number;
  private _firstName2: string;
  private _lastName2: string;

  constructor(age: number, firstName: string, lastName: string) {
    this._age2 = age;
    this._firstName2 = firstName;
    this._lastName2 = lastName;
  }
  public get age2() {
    return this._age2;
  }

  public set age2(theAge: number) {
    if (theAge <= 0 || theAge >= 200) {
      throw new Error("The age is invalid");
    }
    this._age2 = theAge;
  }

  public getFullName(): string {
    return `${this._firstName2} ${this._lastName2}`;
  }
}

let a10 = new Person10(20, "John", "raja");
a10.age2 = 10;
console.log(a10.age2);
