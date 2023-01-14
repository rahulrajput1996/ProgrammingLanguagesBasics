
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

/**
 * this is what comes under description
 * this is <i>ITALIC</i>
 * <p>
 * This is my para
 * </p>
 * 
 * @author Rahul Kumar Singh
 * @version 0.1
 * @since 2022
 * @see <a href="https://google.com" target="_blank">Google</a>
 */

public class Rahul105 {
    /**
     * this gives sum of two numbers
     * 
     * @param a this is first argument.
     * @param b this is second argument.
     * @return it gives sum of 2 numbers
     * @throws Exception if a is zero.
     * @deprecated this method is deprecated use + operator
     */
    public static int add(int a, int b) throws Exception {
        if (a == 0) {
            throw new Exception();
        }
        System.out.println(a + b);
        return a + b;

    }

    public static void main(String[] args) {
        Base b1 = new Base(5);
        Child c1 = new Child();
        Child c2 = new Child(10, 20);
        Grand g1 = new Grand();
        Grand g2 = new Grand(30, 40, 50);

    }
}
