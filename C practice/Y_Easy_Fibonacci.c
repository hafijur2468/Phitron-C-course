#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int n, i;
    scanf("%d", &n);
    int a[n];
    a[1] = 0;
    a[2] = 1;
    for (i = 3; i <= n; i++)
    {
        a[i] = a[i - 1] + a[i - 2];
    }

    for (i = 1; i <= n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}