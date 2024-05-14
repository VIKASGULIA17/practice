#include <stdio.h>

void add_matrices(int a[][100], int b[][100], int result[][100], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
}

void multiply_matrices(int a[][100], int b[][100], int result[][100], int rows1, int cols1, int rows2, int cols2)
{
    if (cols1 != rows2)
    {
        printf("column of 1st and row of 2nd matrix are not equal.\n");
        return;
    }

    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++)
            {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

void transpose_matrix(int a[][100], int result[][100], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result[j][i] = a[i][j];
        }
    }
}

int main()
{
    int rows1, cols1, rows2, cols2;
    printf("Enter the number of rows and columns of the first matrix: ");
    scanf("%d %d", &rows1, &cols1);
    printf("Enter the elements of the first matrix:\n");
    int a[100][100];
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the number of rows and columns of the second matrix: ");
    scanf("%d %d", &rows2, &cols2);
    printf("Enter the elements of the second matrix:\n");
    int b[100][100];
    for (int i = 0; i < rows2; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    int result[100][100];

    printf("\nMatrix Addition:\n");

    if (rows1 == rows2 && cols1 == cols2)
    {
        add_matrices(a, b, result, rows1, cols1);
        for (int i = 0; i < rows1; i++)
        {
            for (int j = 0; j < cols1; j++)
            {
                printf("%d ", result[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("rows and columns are not ewaul.\n");
    }

    printf("\nMatrix Multiplication:\n");
    if (cols1 == rows2)
    {
        multiply_matrices(a, b, result, rows1, cols1, rows2, cols2);
        for (int i = 0; i < rows1; i++)
        {
            for (int j = 0; j < cols2; j++)
            {
                printf("%d ", result[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("column of 1st and row of 2nd matrix are not equal\n");
    }

    printf("\nMatrix Transpose:\n");
    transpose_matrix(a, result, rows1, cols1);
    for (int i = 0; i < cols1; i++)
    {
        for (int j = 0; j < rows1; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
