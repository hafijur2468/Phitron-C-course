#include <stdio.h>
#include <conio.h>
#include <math.h>

int dtob(int n, int i, int bin)
{

    if (n == 0)
    {
        return bin;
    }

    dtob(n / 2, i * 10, bin);
    int rem = n % 2;
    bin = bin + rem * i;

    return bin;
}

int main()
{
    int n, a;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a);
        int res = dtob(a, 1, 0);
        printf("%d", res);
    }
    return 0;
}