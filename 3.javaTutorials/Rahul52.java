
class Circle {
    int radius;

    public Circle(int a) {
        this.radius = a;
    }

    public double area() {
        return (22.0 / 7.0 * radius * radius);
    }
}

class Cylinder extends Circle {
    int height;

    public Cylinder(int a, int b) {
        super(a);
        this.height = b;
    }

    public double Volume() {
        return (super.area() * height);
    }
}

public class Rahul52 {
    public static void main(String[] args) {
        Circle small = new Circle(10);
        System.out.println(small.area());

        Cylinder big = new Cylinder(12, 14);
        System.out.println(big.area());
        System.out.println(big.Volume());
    }
}
