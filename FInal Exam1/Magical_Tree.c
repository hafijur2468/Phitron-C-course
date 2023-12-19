#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    int count = 0;

    for (int i = 3; i <= n; i += 2)
    {
        count++;
    }

    int upper_tree = 6 + count;

    for (int i = 1; i <= upper_tree; i++)
    {
        for (int j = upper_tree - i; j >= 0; j--)
        {
            printf(" ");
        }

        for (int j = 0; j < 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (int i = 1; i <= 5; i++)
    {
        for (int j = (6 - 1); j > 0; j--)
        {
            printf(" ");
        }
        for (int j = 1; j <= n; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}