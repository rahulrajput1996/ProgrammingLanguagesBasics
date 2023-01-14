class Employee {
    int salary;
    String name;

    public int getsalary() {
        return salary;
    }

    public String getname() {
        return name;
    }

    public String setname(String newname) {
        this.name = newname;
        return newname;
    }
}

class Cellphone {
    String name;

    public void ring() {
        System.out.println(name + " Phone is ringing");
    }

    public void vibrate() {
        System.out.println(name + " Phone is vibrating");
    }
}

class Circle {
    float radius;

    public float area() {
        return ((22.0f / 7.0f) * (radius * radius));
    }

    public float perimeter() {
        return ((22.0f / 7.0f) * (radius * 2));
    }
}

public class Rahul39 {
    public static void main(String[] args) {

        Employee rahul = new Employee();
        rahul.salary = 1000;
        rahul.name = "rahul kumar singh";

        System.out.println(rahul.getname());
        System.out.println(rahul.getsalary());
        System.out.println(rahul.setname("ashish kumar singh"));
        System.out.println(rahul.getname());

        Cellphone smartphone = new Cellphone();
        smartphone.name = "nokia";
        smartphone.ring();
        smartphone.vibrate();

        Circle big = new Circle();
        big.radius = 10.4f;
        System.out.println(big.area());
        System.out.println(big.perimeter());
    }
}
