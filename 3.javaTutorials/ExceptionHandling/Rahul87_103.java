import java.util.InputMismatchException;
import java.util.Scanner;

class Maxreach extends Exception {
    @Override
    public String toString() {
        return "input is greater than 10000";
    }

    @Override
    public String getMessage() {
        return "input should be less than 10000";
    }
}

class Limitexcess extends Exception {
    @Override
    public String toString() {
        return "Multiplication input is greater than 7000";
    }

    @Override
    public String getMessage() {
        return "Multiplication input should be less than 7000";
    }
}

public class Rahul87_103 {
    public static int multiplication(int a, int b) throws Limitexcess {
        if (a > 7000 || b > 7000) {
            throw new Limitexcess();
        } else {
            return a * b;
        }
    }

    public static void main(String[] args) {
        // Error Handling calculator
        boolean root = true;
        while (root) {
            Scanner sc = new Scanner(System.in);
            try {
                System.out.println(
                        "press 1 for addition , press 2 for subtraction ,press 3 for multiplication ,press 4 for divide, press 5 for quit");
                int choice = sc.nextInt();
                System.out.println("Enter first number");
                int firstnumber = sc.nextInt();
                System.out.println("Enter second number");
                int secondnumber = sc.nextInt();
                if (firstnumber > 10000 || secondnumber > 10000) {
                    try {
                        throw new Maxreach();
                    } catch (Exception e) {
                        System.out.println(e);
                        System.out.println(e.getMessage());
                    }
                } else {
                    switch (choice) {
                        case 1:
                            System.out.println("the sum is " + (firstnumber + secondnumber));
                            break;
                        case 2:
                            System.out.println("the subtraction is " + (firstnumber - secondnumber));
                            break;
                        case 3:
                            try {
                                int ans1 = multiplication(firstnumber, secondnumber);
                                System.out.println("the multiplication is " + ans1);
                                break;
                            } catch (Exception e) {
                                System.out.println(e);
                                System.out.println(e.getMessage());
                                break;
                            }
                        case 4:
                            try {
                                int ans2 = firstnumber / secondnumber;
                                System.out.println("the divison is " + ans2);
                                break;
                            } catch (Exception e) {
                                System.out.println(e);
                                break;
                            }
                        case 5:
                            sc.close();
                            root = false;
                            break;
                        default:
                            break;
                    }
                }
            } catch (InputMismatchException e) {
                System.out.println(e);
            }
        }
    }
}