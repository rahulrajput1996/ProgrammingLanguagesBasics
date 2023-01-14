abstract class Shape {
    public void greet1() {
        System.out.println("good morning");
    }

    abstract public int area(int x, int y);
}

class Rectangle extends Shape {
    public int area(int a, int b) {
        return a * b;
    }

    public void greet2() {
        System.out.println("good night");
    }
}

abstract class Cube extends Shape {
    public int volume(int x) {
        return x * x * x;
    }
}

public class Rahul53 {
    public static void main(String[] args) {

        // Shape c1 = new Shape(); will give error
        // Cube d1 = new Cube(); will give error
        Rectangle r1 = new Rectangle();
        r1.greet1();
        r1.greet2();
        System.out.println(r1.area(10, 20));

        // Rectangle r2 = new Shape(); will give error
        Shape r2 = new Rectangle();
        r2.greet1();
        // r2.greet2(); will give error
        System.out.println(r2.area(11, 20));
    }
}
