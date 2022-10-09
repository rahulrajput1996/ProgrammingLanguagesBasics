public class Lecture_Pattern {
    public static void main(String[] args) {
        int n = 5;
        int m = 6;
        // pattern 1

        System.out.println("------------pattern------------------");
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                System.out.print("*");
            }
            System.out.println();
        }

        // pattern 2
        System.out.println("------------pattern------------------");

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                if (i == 1 || j == m || i == n || j == 1) {
                    System.out.print("*");
                } else {
                    System.out.print(" ");
                }
            }
            System.out.println();

        }

        // pattern 3
        System.out.println("------------pattern------------------");

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                System.out.print("*");
            }
            System.out.println();
        }

        // pattern4
        System.out.println("------------pattern------------------");

        for (int i = n; i >= 1; i--) {
            for (int j = 1; j <= i; j++) {
                System.out.print("*");
            }
            System.out.println();
        }

        // pattern 5
        System.out.println("------------pattern------------------");

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n - i; j++) {
                // spaces
                System.out.print(" ");
            }
            for (int j = 1; j <= i; j++) {
                // star
                System.out.print("*");
            }
            System.out.println();

        }

        // pattern 6
        System.out.println("------------pattern------------------");

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                // star
                System.out.print(j);
            }
            System.out.println();

        }

        // pattern 7
        System.out.println("------------pattern------------------");

        for (int i = n; i >= 1; i--) {
            for (int j = 1; j <= i; j++) {
                // star
                System.out.print(j);
            }
            System.out.println();
        }

        // pattern 8
        System.out.println("------------pattern------------------");

        int count = 1;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                // star
                System.out.print(count);
                System.out.print(" ");
                count++;
            }
            System.out.println();

        }

        // pattern 9
        System.out.println("------------pattern------------------");

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                // star
                if ((i + j) % 2 == 0) {
                    System.out.print("1");
                } else {
                    System.out.print("0");

                }
            }
            System.out.println();

        }

    }
}
