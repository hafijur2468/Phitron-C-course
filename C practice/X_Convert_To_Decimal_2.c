#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int n, i;
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    do
    {
        printf("%d ", n % 10);
        n = n / 10;
    } while (n != 0);

    return 0;
}