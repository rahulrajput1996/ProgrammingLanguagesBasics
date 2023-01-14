import java.util.Scanner;

class IndexOut extends Exception {
    public String toString() {
        return "given index is greater than max index";
    }

    public String getMessage() {
        return "Enter indexNo. less than 5";
    }
}

public class Rahul86 {

    public static int divide2(int a, int b) throws IllegalArgumentException {
        if (a > 100 & b > 100) {
            throw new IllegalArgumentException();
        }
        try {
            return a / b;
        } catch (Exception e) {
            System.out.println(e);
            return 0;
        }
    }

    public static int mymarks(int myarr[], int a) throws IndexOut {
        if (a > 4) {
            throw new IndexOut();
        }
        return myarr[a];
    }

    public static void main(String[] args) {
        // Syntax error
        // a=10;
        // int b=30

        // Question2
        // try {
        // divide2(1000, 1000);
        // } catch (Exception e) {
        // System.out.println(e);
        // }

        // Question3
        // int marks[] = { 10, 20, 30, 40, 50 };
        // Scanner sc = new Scanner(System.in);
        // int count = 0;
        // boolean root = true;
        // while (root) {
        // if (count < 5) {
        // System.out.println("enter the index number");
        // int index = sc.nextInt();
        // count = count + 1;
        // try {
        // System.out.println("the value is " + marks[index]);
        // sc.close();
        // break;
        // } catch (Exception e) {
        // System.out.println(e);
        // }
        // } else {
        // System.out.println("error");
        // break;
        // }
        // }

        // Question4
        // int marks[] = { 10, 20, 30, 40, 50 };
        // Scanner sc = new Scanner(System.in);
        // int count = 0;
        // boolean root = true;
        // while (root) {
        // if (count < 5) {
        // System.out.println("enter the index number");
        // int index = sc.nextInt();
        // count = count + 1;

        // if (index > 4) {
        // try {
        // throw new IndexOut();

        // } catch (Exception e) {
        // System.out.println(e);
        // System.out.println(e.toString());
        // System.out.println(e.getMessage());
        // }
        // } else {
        // System.out.println("the value is " + marks[index]);
        // sc.close();
        // break;
        // }
        // if (count > 4) {
        // break;
        // }

        // }

        // Question 5
        int marks[] = { 10, 20, 30, 40, 50 };
        System.out.println("Enter index number of array");
        Scanner sc = new Scanner(System.in);
        int index = sc.nextInt();

        try {
            int element = mymarks(marks, index);
            System.out.println(element);
            sc.close();

        } catch (Exception e) {
            System.out.println(e);
            System.out.println(e.toString());
            System.out.println(e.getMessage());
        }
    }
}
