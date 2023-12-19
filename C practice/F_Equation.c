#include <stdio.h>
#include <math.h>

void eqn(double n, double m)
{
    double sum = 0;
    for (int i = 1; i <= m; i++)
    {
        if (i % 2 == 0)
        {
            sum = sum + pow(n, i);
        }
    }
    printf("%.0lf", sum);
}

int main()
{
    double a, b;
    scanf("%lf %lf", &a, &b);
    eqn(a, b);
    return 0;
}