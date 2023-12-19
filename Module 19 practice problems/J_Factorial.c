#include <stdio.h>
#include <conio.h>
#include <math.h>

long long int fact(long long int n)
{
    if (n == 0)
    {
        return 1;
    }
    long long int ans = fact(n - 1);
    return ans * n;
}

int main()
{
    long long int n;
    scanf("%lld", &n);
    printf("%lld", fact(n));
    return 0;
}