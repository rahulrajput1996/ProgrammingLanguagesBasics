import java.util.Scanner;

public class rahul25 {
    public static void main(String[] args) {

        // try (Scanner sc = new Scanner(System.in)) {
        // int row = sc.nextInt();
        // for (int i = row; i >= 1; i--) {
        // for (int j = i; j >= 1; j--) {
        // System.out.print("*");
        // }
        // System.out.print("\n");
        // }
        // }

        // try (Scanner sc = new Scanner(System.in)) {
        // int numbers = sc.nextInt();
        // int sum = 0;
        // for (int i = 2; i <= 2 * numbers; i = i + 2) {

        // sum = sum + i;

        // }
        // System.out.println("sum is " + sum);
        // }

        try (Scanner sc = new Scanner(System.in)) {
            int number = sc.nextInt();
            int factorial = 1;
            for (int i = number; i >= 1; i--) {
                factorial = factorial * i;

            }
            System.out.println(factorial);

        }
    }
}