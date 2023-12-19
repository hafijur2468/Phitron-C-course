#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    long long int multiplication;
    int a, b, c, m;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%lld %d %d %d", &multiplication, &a, &b, &c);
        m = a * b * c;

        if (multiplication == 0)
        {
            printf("%d\n", 0);
        }
        else if (multiplication % m == 0)
        {
            printf("%d\n", multiplication / m);
        }
        else
        {
            printf("%d\n", -1);
        }
    }
    return 0;
}