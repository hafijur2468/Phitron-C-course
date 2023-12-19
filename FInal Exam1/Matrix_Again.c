#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int testmatrix[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &testmatrix[i][j]);
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == row - 1)
            {
                printf("%d ", testmatrix[i][j]);
            }
        }
    }
    printf("\n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (j == col - 1)
            {
                printf("%d ", testmatrix[i][j]);
            }
        }
    }
    return 0;
}