public class Lecture17_recursive {
    // print number from 5 to 1
    public static void printnum(int n) {
        if (n == 0) {
            return;
        }
        System.out.println(n);
        printnum(n - 1);
    }

    // print num from 1 to 5
    public static void printnumrev(int n) {
        if (n == 6) {
            return;
        }
        System.out.println(n);
        printnumrev(n + 1);
    }

    // sum of first n terms
    public static int printsum(int n, int sum) {
        if (n == 0) {
            return 0;
        }
        sum = n + printsum(n - 1, sum);
        return sum;
    }

    // factorial of a number
    public static int factorial(int n) {
        if (n == 0) {
            return 1;
        }
        return n * factorial(n - 1);
    }

    // print fibonacci series till nth term
    public static void printfib(int n, int a, int b) {
        if (n == 1) {
            System.out.print(a + " ");
        } else {
            System.out.print(a + " ");
            printfib(n - 1, b, a + b);
        }
    }

    // find of x^n with stack height n
    public static int mulpower(int a, int b) {
        if (b == 1) {
            return a;
        }
        if (b == 0) {
            return 1;
        }
        if (a == 0) {
            return 0;
        }
        return a * mulpower(a, b - 1);
    }

    // find of x^n with stack height n
    public static int mulpower2(int a, int b) {
        if (b == 1) {
            return a;
        }
        if (b == 0) {
            return 1;
        }
        if (a == 0) {
            return 0;
        }
        if (b % 2 == 0) {
            return mulpower(a, b / 2) * mulpower(a, b / 2);
        } else {
            return 2 * mulpower(a, b / 2) * mulpower(a, b / 2);
        }
    }

    public static void main(String[] args) {
        // int n = 5;
        // printnum(5);
        // printnumrev(1);
        int ans = printsum(2, 0);
        System.out.println(ans);

        int fact = factorial(5);
        System.out.println(fact);

        printfib(10, 0, 1);

        int ans2 = mulpower(2, 6);
        System.out.println();
        System.out.println(ans2);

        int ans22 = mulpower2(2, 6);
        System.out.println(ans22);
    }
}
