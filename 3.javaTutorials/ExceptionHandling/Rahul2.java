public class Rahul2 {

    public static int divide(int a, int b) {
        try {
            int ans = a / b;
            return ans;
        } catch (Exception e) {
            System.out.println(e);
            return 0;
        } finally {
            System.out.println("i am finally used in return");
        }
    }

    public static void main(String[] args) {

        // finally with try-catch
        int a = 10;
        int b = 1;

        // finally use by using loop
        boolean root = true;
        while (root) {
            try {
                int c = a / b;
                System.out.println(c);
                b--;
                continue;

            } catch (Exception e) {
                System.out.println(e);
                System.out.println(e.toString());
                System.out.println(e.getMessage());
                break;
            } finally {
                System.out.println("i am finally");
            }
        }

        // finally use by function with return
        // int d = divide(a, b);
        // System.out.println(d);

        // we can not use try alone
        // try{
        // System.out.println("i am here");
        // }

        // we can use try with finally
        // try {
        // System.out.println("i am here");
        // } finally {
        // System.out.println("good");
        // }
        // try {
        // System.out.println(10 / 0);
        // } finally {
        // System.out.println("i am there");
        // }
        // System.out.println(" i am fine");
    }
}
