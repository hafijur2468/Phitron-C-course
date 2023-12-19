#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int n, i;
    scanf("%d", &n);
    long long int a[n], b[n];
    for (i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }
    int cnt = 0;

    for (i = 0; i < n; i++)
    {
        b[i] = a[n - 1 - i];
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] == b[i])
        {
            cnt++;
        }
    }
    if (cnt == n)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}