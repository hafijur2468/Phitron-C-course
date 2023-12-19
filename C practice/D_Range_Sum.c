#include <stdio.h>
#include <math.h>

//! It was A quite nice problem. Learned a lot.

int main()
{
    long long int n;
    scanf("%lld", &n);
    long long int a, b, i, j;
    long long int sum = 0;
    for (i = 1; i <= n; i++)
    {
        scanf("%lld %lld", &a, &b);
        if (a < b)
        {
            sum = ((b * (b + 1)) / 2) - ((a - 1) * a) / 2;
            printf("%lld\n", sum);
        }
        else if (a > b)
        {
            sum = ((a * (a + 1)) / 2) - ((b - 1) * b) / 2;
            printf("%lld\n", sum);
        }
    }

    return 0;
}