#include <stdio.h>

void sum(void)
{
    long long int a, b;
    scanf("%lld %lld", &a, &b);
    printf("%lld\n", a * b);
}
int main()
{
    sum();
    return 0;
}