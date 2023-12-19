#include <stdio.h>

long long int summation(long long int a[], long long int n, long long int sum)
{
    if (n <= 0)
    {
        return sum;
    }
    sum += a[n - 1];
    summation(a, n - 1, sum);
}

int main()
{
    int n;
    scanf("%d", &n);
    long long int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }

    long long int sum = summation(a, n, 0);

    printf("%lld", sum);
    return 0;
}