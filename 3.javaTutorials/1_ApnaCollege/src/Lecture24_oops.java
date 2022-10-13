class Student {
    String name;
    int age;

    Student(String aname, int aage) {
        this.name = aname;
        this.age = aage;
    }

    Student(Student p) {
        this.name = p.name;
        this.age = p.age;
    }

    public void printinfo() {
        System.out.println(this.name + " " + this.age);
    }
}

// copy constructor
public class Lecture24_oops {
    public static void main(String[] args) {
        Student s1 = new Student("rahul", 20);

        Student s2 = new Student(s1);
        s2.printinfo();

    }
}
