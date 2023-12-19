#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int n, m;
    scanf("%d %d ", &n, &m);

    int a[n], b[m];
    int i, j;
    int c[m + n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (j = 0; j < m; j++)
    {
        scanf("%d", &b[j]);
    }
    for (i = 0; i < n; i++)
    {
        c[i] = a[i];
    }
    i = 5;
    for (j = 0; j < n; j++)
    {
        c[i] = b[j];
        i++;
    }
    for (i = 0; i < n + m; i++)
    {
        printf("%d ", c[i]);
    }
    return 0;
}