public class Lecture6_PracticeSet {
    public static int fact(int x) {
        int ans = 1;
        for (int i = 1; i <= x; i++) {
            ans = ans * i;
        }
        return ans;
    }

    public static void main(String[] args) {
        int n = 5;

        System.out.println("-------------------Pattern-------------------");
        for (int i = 1; i <= n; i++) {

            for (int j = 1; j <= 2 * n; j++) {
                if (j == 1 || j == 2 * n || i == j || j == 2 * n + 1 - i) {
                    System.out.print("*");

                } else {
                    System.out.print(" ");
                }
            }
            System.out.println();
        }
        for (int i = n; i >= 1; i--) {

            for (int j = 1; j <= 2 * n; j++) {
                if (j == 1 || j == 2 * n || i == j || j == 2 * n + 1 - i) {
                    System.out.print("*");

                } else {
                    System.out.print(" ");
                }
            }
            System.out.println();
        }
        System.out.println("-------------------Pattern-------------------");
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= 2 * n - i; j++) {
                if (j == 2 * n - i || (i == 1 && j >= n) || (i == n && j <= n) || j == n + 1 - i) {
                    System.out.print("*");

                } else {
                    System.out.print(" ");

                }
            }
            System.out.println();

        }
        System.out.println("-------------------Pattern-------------------");
        for (int i = 1; i <= n; i++) {
            // outer spaces
            for (int j = 1; j <= n - i; j++) {
                System.out.print(" ");
            }
            // middle part
            for (int j = 1; j <= i; j++) {
                System.out.print(fact(i - 1) / (fact(i - j) * fact(j - 1)));
                System.out.print(" ");
            }
            System.out.println();
        }
        System.out.println("-------------------Pattern-------------------");
        for (int i = 1; i <= n; i++) {
            // outer spaces
            for (int j = 1; j <= n - i; j++) {
                System.out.print(" ");
            }
            // middle part
            for (int j = 1; j <= i; j++) {
                System.out.print(j);
                System.out.print(" ");
            }
            System.out.println();
        }
        System.out.println("-------------------Pattern-------------------");
        for (int i = 1; i <= n; i++) {
            // outer spaces
            for (int j = 2; j <= i; j++) {
                System.out.print(" ");
            }
            // middle part
            for (int j = 1; j <= n - i + 1; j++) {
                System.out.print(i);
                System.out.print(" ");
            }
            System.out.println();
        }
    }
}
