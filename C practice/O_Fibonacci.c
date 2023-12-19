#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int n, i;
    scanf("%d", &n);
    long long int fib[n + 1];
    fib[1] = 0;
    fib[2] = 1;
    for (i = 3; i <= n; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    printf("%lld", fib[n]);
    return 0;
}