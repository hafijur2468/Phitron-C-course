#include <stdio.h>

void sum_mat(int a[][], int b[][], int n, int m, int c[][])
{
    c[n][m] = a[n-1][m-1]+b[n][m];
    printf("%d ", c[n+1][m+1]);

}

int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int a[row][col], b[row][col], c[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    sum_mat(a,b,0,0,c);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}