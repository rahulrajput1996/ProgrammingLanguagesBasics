import java.util.InputMismatchException;
import java.util.Scanner;

public class Rahul1 {

    public static void main(String[] args) {
        // Syntax error
        // a = 10; error due to no datatype
        // int b=12 error due to no semicolon

        // logical error
        // question------find sum of 2 number
        // int a = 10;
        // int b = 20;
        // System.out.println("the sum of 10 and 20 is " + (a - b));

        // runtime error
        // int c = 10;
        // int d = 0;
        // System.out.println("the division is " + (c / d)); //arithmetic exception

        // Array index out of bound
        // int marks[] = { 10, 20, 30, 40, 50 };
        // System.out.println("the 100th element is " + marks[100]);

        // handling arithemtic and array index out ofbounds exception
        int marks[] = { 12, 32, 42, 67, 88 };
        boolean img = true;
        while (img) {
            try {
                System.out.println("enter position which you want to divide");
                Scanner sc = new Scanner(System.in);
                int position = sc.nextInt();
                System.out.println("enter number from which you want to divide");
                int factor = sc.nextInt();

                try {
                    System.out.println("ans is " + (marks[position] / factor));
                    img = false;
                    sc.close();

                } catch (IndexOutOfBoundsException e1) {
                    System.out.println("this is due to position given wrong");
                    System.out.println(e1);

                } catch (ArithmeticException e2) {
                    System.out.println("some error due to arithmetic");
                    System.out.println(e2);

                } catch (Exception e3) {
                    System.out.println("some error occured");
                    System.out.println(e3);

                }
            } catch (InputMismatchException e4) {
                System.out.println("give right input");
                System.out.println(e4);
            } catch (Exception e5) {
                System.out.println("some error occured");
                System.out.println(e5);
            }
        }

    }
}