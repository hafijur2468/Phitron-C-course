#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int n, test;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &test);
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] == test)
            {
                printf("Y\n");
            }
        }
    }
    return 0;
}