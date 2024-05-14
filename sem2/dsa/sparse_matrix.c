#include <stdio.h>
#define MAX 20

void read_matrix(int a[10][10], int row, int column);
void print_sparse(int b[MAX][3]);
void create_sparse(int a[10][10], int row, int column, int b[MAX][3]);

int main()
{
    int a[10][10], b[MAX][3], row, column;
    printf("enrollment no:05813702023\n");
    printf("\nEnter the size of matrix (rows, columns): ");
    scanf("%d%d", &row, &column);
    int i, j, ctr = 0;
    read_matrix(a, row, column);
    create_sparse(a, row, column, b);
    print_sparse(b);
    return 0;
}

void read_matrix(int a[10][10], int row, int column)
{
    int i, j, ctr = 0;
    printf("\nEnter elements of matrix\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
            if(a[i][j]==0)
            ++ctr;
        }
    }
    if (ctr > (row * column) / 2)
    {
        printf("The given matrix is a sparse matrix.\n");
    }
    else
    {
        printf("The given matrix is not a sparse matrix.\n");
        return 0;
    }
}

void create_sparse(int a[10][10], int row, int column, int b[MAX][3])
{
    int i, j, k;
    k = 1;
    b[0][0] = row+1;
    b[0][1] = 3;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            if (a[i][j] != 0)
            {
                b[k][0] = i;
                b[k][1] = j;
                b[k][2] = a[i][j];
                k++;
            }
        }
        b[0][2] = k - 1;
    }
}

void print_sparse(int b[MAX][3])
{
    int i, column;
    column = b[0][2];
    printf("\nSparse form - list of 3 triples\n\n");
    for (i = 0; i <= column; i++)
    {
        printf("%d\t%d\t%d\n", b[i][0], b[i][1], b[i][2]);
    }
}