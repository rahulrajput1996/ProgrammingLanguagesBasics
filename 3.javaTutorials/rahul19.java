
import java.util.Scanner;

public class rahul19 {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            System.out.println("enter your year");
            int year = sc.nextInt();
            if (year % 400 == 0) {
                System.out.println("leap year");
            } else if (year % 100 == 0) {
                System.out.println("Not leap year");

            } else if (year % 4 == 0) {
                System.out.println("leap year");

            } else {
                System.out.println("Not leap year");

            }
        }
    }

}