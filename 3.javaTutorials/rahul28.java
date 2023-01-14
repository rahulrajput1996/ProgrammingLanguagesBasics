import java.util.Scanner;

public class rahul28 {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            // System.out.println("how many data you want to enter");
            // int number = sc.nextInt();
            // int[] marks = new int[number];
            // System.out.println("enter students marks");
            // for (int i = 0; i < number; i++) {
            // marks[i] = sc.nextInt();
            // }
            // System.out.println("the length of array is " + marks.length);
            // System.out.println("the enetred marks are");
            // for (int i = 0; i < marks.length; i++) {
            // System.out.println(marks[i]);
            // }
            // System.out.println("again enetred marks are");
            // for (int element : marks) {
            // System.out.println(element);
            // }

            System.out.println("enter rows");
            int row = sc.nextInt();
            System.out.println("enter column");
            int column = sc.nextInt();
            int[][] flats = new int[row][column];
            System.out.println("enter rooms numbers");
            for (int i = 0; i < row; i++) {
                for (int j = 0; j < column; j++) {
                    flats[i][j] = sc.nextInt();
                }
            }
            System.out.println("room numbers are");
            for (int i = 0; i < row; i++) {
                for (int j = 0; j < column; j++) {
                    System.out.println(flats[i][j]);

                }
            }

        }

    }
}
