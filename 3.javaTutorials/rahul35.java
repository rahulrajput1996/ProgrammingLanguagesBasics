public class rahul35 {

    public static void mytable(int x) {
        int myterm;
        for (int i = 1; i <= 10; i++) {
            myterm = i * x;
            System.out.println(x + "X" + i + "=" + myterm);
        }
    }

    public static void mypattern1(int x) {
        for (int i = 1; i <= x; i++) {
            for (int j = 1; j <= i; j++) {

                System.out.print("*");
            }
            System.out.println();
        }
    }

    public static int mysum(int x) {
        int sum = 0;
        if (x == 0) {
            return 0;
        } else {
            sum = x + mysum(x - 1);
        }
        return sum;
    }

    public static void mypattern2(int x) {
        for (int index = x; index >= 1; index--) {
            for (int i = 1; i <= index; i++) {
                System.out.print("*");
            }
            System.out.println();
        }
    }

    public static int fibonacci(int x) {
        if (x == 1) {
            return 0;
        } else if (x == 2) {
            return 1;
        } else {
            return fibonacci(x - 1) + fibonacci(x - 2);
        }
    }

    public static double myaverage(int... arr) {
        double sum = 0;
        for (int i : arr) {
            sum = sum + i;
        }
        return sum / arr.length;
    }

    public static void main(String[] args) {
        // question 1
        // int number = 4;
        // mytable(number);

        // question 2
        // int number = 4;
        // mypattern1(number);

        // question3
        // int number = 5;
        // int sum = mysum(number);
        // System.out.println(sum);

        // question 4
        // int number = 5;
        // mypattern2(number);

        // question 5
        // int number = 10;
        // int ans = fibonacci(number);
        // System.out.println(ans);

        // question6
        // double ans = myaverage(4, 6, 5);
        // System.out.println(ans);
    }
}
