#include <stdio.h>
#include <conio.h>
int main()
{
    int row1, column1, column2;
    printf("enter first matrix rows: ");
    scanf("%d", &row1);
    getchar();
    printf("enter first matrix columns: ");
    scanf("%d", &column1);
    getchar();
    printf("enter second matrix columns: ");
    scanf("%d", &column2);
    getchar();

    int matrix1[row1][column1];
    int matrix2[column1][column2];
    int matrix3[row1][column2];

    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column1; j++)
        {
            printf("enter first matrix(%d,%d)", i, j);
            scanf("%d", &matrix1[i][j]);
            getchar();
        }
    }
    for (int i = 0; i < column1; i++)
    {
        for (int j = 0; j < column2; j++)
        {
            printf("enter second matrix(%d,%d)", i, j);
            scanf("%d", &matrix2[i][j]);
            getchar();
        }
    }

    for (int i = 0; i < row1; i++)
    {
        for (int k = 0; k < column2; k++)
        {
            int sum = 0;
            for (int j = 0; j < column1; j++)
            {
                int multiplication = matrix1[i][j] * matrix2[j][k];
                sum = sum + multiplication;
            }
            matrix3[i][k] = sum;
        }
    }

    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column2; j++)
        {
            printf("final matrix(%d,%d) : %d\n", i, j, matrix3[i][j]);
        }
    }

    return 0;
}