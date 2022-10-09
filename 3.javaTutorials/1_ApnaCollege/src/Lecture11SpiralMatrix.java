import java.util.Scanner;

public class Lecture11SpiralMatrix {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        int mat[][] = new int[n][m];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                mat[i][j] = sc.nextInt();
            }
        }
        sc.close();

        System.out.println("The Spiral Order mat is : ");
        int rowStart = 0;
        int rowEnd = n - 1;
        int colStart = 0;
        int colEnd = m - 1;
        // To print spiral order mat
        while (rowStart <= rowEnd && colStart <= colEnd) {
            // 1
            for (int col = colStart; col <= colEnd; col++) {
                System.out.print(mat[rowStart][col] + " ");
            }
            rowStart++;
            // 2
            for (int row = rowStart; row <= rowEnd; row++) {
                System.out.print(mat[row][colEnd] + " ");
            }
            colEnd--;
            // 3
            for (int col = colEnd; col >= colStart; col--) {
                System.out.print(mat[rowEnd][col] + " ");
            }
            rowEnd--;
            // 4
            for (int row = rowEnd; row >= rowStart; row--) {

                System.out.print(mat[row][colStart] + " ");
            }
            colStart++;
            System.out.println();
        }
    }
}
