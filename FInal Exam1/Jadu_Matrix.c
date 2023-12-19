#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int row, col;
    int flag = 0;
    scanf("%d %d", &row, &col);

    int judoMatrix[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &judoMatrix[i][j]);
        }
    }

    if (row != col)
    {
        flag = 1;
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j)
            {
                if (judoMatrix[i][j] != 1)
                {
                    flag = 1;
                }
            }
            else if (i + j == row - 1)
            {
                if (judoMatrix[i][j] != 1)
                {
                    flag = 1;
                }
            }
            else
            {
                if (judoMatrix[i][j] != 0)
                {
                    flag = 1;
                }
            }
        }
    }

    if (flag == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}