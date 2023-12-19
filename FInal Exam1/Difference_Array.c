#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int num;
        scanf("%d", &num);
        int a[num], b[num], c[num];
        for (int j = 0; j < num; j++)
        {
            scanf("%d", &a[j]);
        }

        for (int j = 0; j < num; j++)
        {
            b[j] = a[j];
        }

        for (int j = 0; j < num - 1; j++)
        {
            for (int k = 1+j; k < num; k++)
            {
                if (b[j] > b[k])
                {
                    int tmp = b[j];
                    b[j] = b[k];
                    b[k] = tmp;
                }
            }
        }

        for (int j = 0; j < num; j++)
        {
            c[j] = abs(a[j]-b[j]);
        }

        for (int j = 0; j < num; j++)
        {
            printf("%d ",c[j]);
        }
        printf("\n");


    }
    return 0;
}