#include <stdio.h>
#include <conio.h>
#include <math.h>

void digits(int n)
{
    int s = n % 10;
    if (n == 0)
    {
        return;
    }
    digits(n / 10);
    printf("%d ", s);
}

int main()
{
    int n, a;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a);
        digits(a);
        if (a == 0)
        {
            printf("0");
        }
        printf("\n");
    }

    return 0;
}