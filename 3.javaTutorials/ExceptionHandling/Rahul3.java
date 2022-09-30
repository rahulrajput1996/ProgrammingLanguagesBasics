import java.util.Scanner;

class Myexception extends Exception {
    @Override
    public String toString() {
        return " i am custom";
    }

    @Override
    public String getMessage() {
        return " i am back";
    }
}

public class Rahul3 {

    public static void main(String[] args) {
        int a;
        Scanner sc = new Scanner(System.in);
        a = sc.nextInt();
        sc.close();
        if (a > 18) {
            try {
                // throw new Myexception();
                throw new ArithmeticException("my bad");

            } catch (Exception e) {
                System.out.println(e);
                System.out.println(e.toString());
                System.out.println(e.getMessage());
                e.printStackTrace();
            }
        }
    }
}
