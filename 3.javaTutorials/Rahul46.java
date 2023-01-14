class Base {

    public Base() {
        System.out.println("constructor 1");
    }

    public Base(int x) {
        System.out.println("constructor " + x);
    }
}

class Child extends Base {

    public Child() {
        System.out.println("constructor 2");
    }

    public Child(int x, int y) {
        super(x);
        System.out.println("constructor " + y);
    }
}

class Grand extends Child {

    public Grand() {
        System.out.println("constructor 3 ");
    }

    public Grand(int x, int y, int z) {
        super(x, y);
        System.out.println("constructor " + z);
    }
}

public class Rahul46 {
    public static void main(String[] args) {
        Base b1 = new Base(5);
        Child c1 = new Child();
        Child c2 = new Child(10, 20);
        Grand g1 = new Grand();
        Grand g2 = new Grand(30, 40, 50);
    }
}
