import java.util.*;

public class Lecture_4_Practice {
    public static void isPrime(int x) {
        if (x == 1) {
            System.out.println("number is not prime not composite");
            return;
        } else {
            for (int i = 2; i * i <= x; i++) {
                if (x % i == 0) {
                    System.out.println("number is not prime");
                    return;
                }
            }
        }
        System.out.println("number is prime");
        return;
    }

    public static void main(String[] args) {
        // int n = 20;

        // print even numbers till n
        // for (int i = 2; i <= n; i = i + 2) {
        // System.out.println(i);
        // }

        // infinite loop
        // for (;;) {
        // System.out.println("i am loop");
        // }

        // problem 10
        System.out.println("---------------problem--------------");
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        isPrime(n);
        sc.close();

    }

}