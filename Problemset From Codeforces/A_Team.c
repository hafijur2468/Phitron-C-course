#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);

    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        if (a + b + c >= 2)
        {
            count++;
        }
    }

    printf("%d", count);
    return 0;
}