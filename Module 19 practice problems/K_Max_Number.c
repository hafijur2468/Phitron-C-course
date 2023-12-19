#include <stdio.h>
#include <limits.h>
#include <math.h>

int max_find(int a[], int n, int i)
{
    if (i == n)
    {
        return INT_MIN;
    }

    int num = max_find(a, n, i + 1);
    if (a[i] > num)
    {
        return a[i];
    }
    else
    {
        return num;
        
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int res = max_find(a, n, 0);
    printf("%d", res);

    return 0;
}