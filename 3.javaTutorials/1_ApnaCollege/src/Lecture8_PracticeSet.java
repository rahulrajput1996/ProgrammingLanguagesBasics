import java.util.*;

public class Lecture8_PracticeSet {
    public static double AverageSum(double x, double y, double z) {
        return (x + y + z) / 3;
    }

    public static int Sum(int x) {
        int sum = 0;
        for (int i = 1; i <= x; i = i + 2) {
            sum = sum + i;
        }
        return sum;
    }

    public static int power(int x, int n) {
        if (n == 0) {
            return 1;
        }
        int ans = 1;
        for (int i = 1; i <= n; i++) {
            ans = ans * x;
        }
        return ans;
    }

    public static int gcd(int x, int n) {
        int smallest;
        if (x > n) {
            smallest = n;
        } else {
            smallest = x;
        }
        for (int i = smallest; i >= 1; i--) {
            if (x % i == 0 && n % i == 0) {
                return i;
            }
        }
        return -1;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        // problem1
        // System.out.println("---------------problem--------------");
        // double num1 = sc.nextDouble();
        // double num2 = sc.nextDouble();
        // double num3 = sc.nextDouble();
        // double avg = AverageSum(num1, num2, num3);
        // System.out.println("The average is :" + avg);

        // problem 2
        // System.out.println("---------------problem--------------");
        // int num4 = sc.nextInt();
        // System.out.printf("the sum of all odd num from 1 to %d is %d", num4,
        // Sum(num4));

        // problem 6
        // System.out.println("---------------problem--------------");
        // do {
        // System.out.println("infinite loop");
        // }while(true);

        // problem 7
        // System.out.println("---------------problem--------------");
        // int pcount = 0;
        // int ncount = 0;
        // int zcount = 0;
        // while (true) {
        // System.out.println("Enter number");
        // int num = sc.nextInt();
        // sc.nextLine();
        // if (num > 0) {
        // pcount++;

        // } else if (num == 0) {
        // zcount++;
        // } else if (num < 0) {
        // ncount++;
        // }
        // System.out.println("press q for quit or press c for continue");
        // String loop = sc.nextLine();
        // if (loop.equals("q")) {
        // break;
        // }
        // }
        // System.out.println("positive values entered were " + pcount);
        // System.out.println("negative values entered were " + ncount);
        // System.out.println("zero values entered were " + zcount);

        // problem 8
        // System.out.println("---------------problem--------------");
        // int x = sc.nextInt();
        // int n = sc.nextInt();
        // System.out.printf("the value of %d^%d is %d ", x, n, power(x, n));

        // problem 9
        // System.out.println("---------------problem--------------");
        // int x = sc.nextInt();
        // int n = sc.nextInt();
        // System.out.printf("the value of gcd of %d and %d is %d ", x, n, gcd(x, n));

        // problem 10
        System.out.println("---------------problem--------------");
        // int n = sc.nextInt();
        // int firstterm = 0;
        // int secondterm = 1;
        // for (int count = 1; count <= n; count++) {
        // if (count == 1) {
        // System.out.print(firstterm + " ");
        // } else if (count == 2) {
        // System.out.print(secondterm + " ");
        // } else {
        // int finalterm = firstterm + secondterm;
        // System.out.print(finalterm + " ");
        // firstterm = secondterm;
        // secondterm = finalterm;
        // }
        // }

        sc.close();

    }
}
