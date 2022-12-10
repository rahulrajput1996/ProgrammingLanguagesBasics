var Employee = /** @class */ (function () {
    function Employee(fs, age, ls) {
        this.firstname = fs;
        this.age = age;
        this.lastname = ls;
    }
    Employee.prototype.getdata = function () {
        console.log(this.firstname);
        console.log(this.lastname);
        console.log(this.age);
    };
    return Employee;
}());
var myobj1 = new Employee("rahul", 21, "rajput");
myobj1.getdata();
myobj1.lastname = "singh";
myobj1.age = 10;
myobj1.getdata();
var Programmer = /** @class */ (function () {
    function Programmer(language, experience, age) {
        this.language = language;
        this.experience = experience;
        this.age = age;
    }
    Programmer.prototype.mygetdata = function () {
        console.log(this.age);
        console.log(this.experience);
        console.log(this.language);
    };
    return Programmer;
}());
var myobj2 = new Programmer("java", 10, 120);
myobj2.mygetdata();
