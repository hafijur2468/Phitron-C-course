#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int n, i, j, k;
    scanf("%d", &n);

    int s = 1;

    for (i = 1; i <= n; i++)
    {
        for (j = n - 1; j >= i; j--)
        {
            printf(" ");
        }
        for (k = 0; k < s; k++)
        {
            printf("*");
        }
        s = s + 2;
        printf("\n");
    }

    return 0;
}