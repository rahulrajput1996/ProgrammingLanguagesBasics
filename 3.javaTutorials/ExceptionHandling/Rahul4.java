class NegativeException extends Exception {
    @Override
    public String toString() {
        return "radius can not be negative";
    }

    @Override
    public String getMessage() {
        return "give correct radius";
    }
}

public class Rahul4 {

    public static double area(int a) throws NegativeException {
        if (a < 0) {
            throw new NegativeException();
        }
        return Math.PI * a * a;
    }

    public static int divide(int a, int b) throws ArithmeticException {
        return a / b;
    }

    public static void main(String[] args) {
        // Throws

        try {
            int ans = divide(10, 0);
            System.out.println(ans);

        } catch (Exception e) {
            System.out.println(e);
        }

        // Throw vs Throws

        try {
            double ans2 = area(-10);
            System.out.println(ans2);
        } catch (Exception e) {
            System.out.println(e);
            System.out.println(e.toString());
            System.out.println(e.getMessage());
        }
    }
}
