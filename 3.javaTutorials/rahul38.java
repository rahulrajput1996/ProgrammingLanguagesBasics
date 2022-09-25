// only one class can start from public
class Employee {

    int age;
    float salary; // default access modifier can not be accessed by classname
    String name;
    static String father; // can be set and accessed by object and class but to get and access by object
                          // will give warning but output we can get same.

    public void printingarea1() {
        System.out.println("name of employee is " + name + " salary is " + salary + " age is " + age);
    }

    public static void printingarea2() {
        System.out.println("i am working2" + father);
    }

    public void printingarea3() {
        System.out.println("i am working3" + father);
    }
}

public class rahul38 {
    public static void main(String[] args) {
        System.out.println("rahul38.main()");

        Employee rahul = new Employee();
        rahul.name = "rahul kumar singh";
        rahul.age = 10;
        rahul.salary = 15.763f;

        System.out.println(Employee.father);

        // System.out.println(Employee.age); error because only static can be accessed
        // by classname

        System.out.println(rahul.name);

        Employee.father = "vipin kumar";
        System.out.println(Employee.father);

        rahul.printingarea1();
        // Employee.printingarea1(); // error bacause only access static methods

        Employee.printingarea2();
        // rahul.printingarea2(); //will run but not a good practice

        rahul.printingarea3();
        // Employee.printingarea3(); // error bacause only access static methods

    }

}
