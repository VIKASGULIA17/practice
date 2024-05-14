// #include <stdio.h>

// #define ROW 3
// #define COL 3

// int main() {
//     int sparseMatrix[ROW][COL];
//     int i, j;
//     sparseMatrix[0][0] = 1;
//     sparseMatrix[0][1] = 0;
//     sparseMatrix[0][2] = 0;
//     sparseMatrix[1][0] = 0;
//     sparseMatrix[1][1] = 0;
//     sparseMatrix[1][2] = 2;
//     sparseMatrix[2][0] = 0;
//     sparseMatrix[2][1] = 3;
//     sparseMatrix[2][2] = 0;
//     printf("enrollment no:05813702023\n");
//     printf("Sparse Matrix:\n");
//     for (i = 0; i < ROW; i++) {
//         for (j = 0; j < COL; j++) {
//             printf("%d ", sparseMatrix[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }
#include <stdio.h>
#define max 10
int read_matrix(int arr[max][max], int row, int column)
{
    int cr = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("enter element at[%d][%d]", i, j);
            scanf("%d", &arr[i][j]);
            if (arr[i][j] == 0)
                cr++;
        }
    }
    if (cr > (row * column) / 2)
    {
        printf("sparse matrix");
    }
    else
        printf("not sparse");
}
int create_sparse(int arr[max][max], int row, int column, int b[max][3])
{
    int k = 1;
    b[0][1] = 3;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (arr[i][j] != 0)
            {
                b[k][0] = i;
                b[k][1] = j;
                b[k][2] = arr[i][j];
                k++;
            }
        }
        b[0][2] = k - 1;
    b[0][0] = k;
    }
}
void print_sparse(int b[max][3])
{
    int i, column;
    column = b[0][2];
    printf("\nSparse form - list of 3 triples\n\n");
    for (i = 0; i <= column; i++)
    {
        printf("%d\t%d\t%d\n", b[i][0], b[i][1], b[i][2]);
    }
}
int main()
{
    int a[10][10], b[max][3], row, column;
    printf("enrollment no:05813702023\n");
    printf("\nEnter the size of matrix (rows, columns): ");
    scanf("%d%d", &row, &column);
    int i, j, ctr = 0;
    read_matrix(a, row, column);
    create_sparse(a, row, column, b);
    print_sparse(b);
    return 0;
}