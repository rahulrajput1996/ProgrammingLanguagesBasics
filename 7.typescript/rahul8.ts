class Employee{
    private firstname: string;
    public lastname: string;
    age: number;  //by default public
    protected address: string;

    constructor(fs:string,age:number,ls:string) {
        this.firstname = fs;
        this.age = age;
        this.lastname = ls;
    }
    getdata() {
        console.log(this.firstname);
        console.log(this.lastname);
        console.log(this.age);
    }
}
let myobj1 = new Employee("rahul",21,"rajput");
myobj1.getdata();
myobj1.lastname = "singh";
myobj1.age = 10;
myobj1.getdata();

class Programmer{
    constructor(private language: string,private experience: number,private age?: number) {
        
    }
    mygetdata() {
        console.log(this.age);
        console.log(this.experience);
        console.log(this.language);
    }
}

let myobj2 = new Programmer("java", 10, 120);
myobj2.mygetdata();