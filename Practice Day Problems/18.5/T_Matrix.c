#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d %d", &n);
    int mat[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    int sumMainDiagonal = 0, sumSecondaryDiagonal = 0;

    for (int i = 0; i < n; ++i)
    {
        printf("%d ", mat[i][i]);
    }

    // printf("%d",sumMainDiagonal);

    // printf("%d %d",sumMainDiagonal,sumSecondaryDiagonal);

    // int abssoluteDifference = abs(sumMainDiagonal-sumSecondaryDiagonal);
    // printf("%d %d",sumMainDiagonal,sumSecondaryDiagonal);

    return 0;
}