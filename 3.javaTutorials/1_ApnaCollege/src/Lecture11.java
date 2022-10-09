import java.util.Scanner;

public class Lecture11 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int row = sc.nextInt();
        int column = sc.nextInt();
        int mat[][] = new int[row][column];
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++) {
                mat[i][j] = sc.nextInt();
            }
        }
        sc.close();

        // transposing the matrix
        int mat2[][] = new int[row][column];
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++) {
                mat2[i][j] = mat[j][i];
            }
        }

        // print transpose
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++) {
                System.out.print(mat2[i][j] + " ");
            }
            System.out.println();
        }

    }
}
