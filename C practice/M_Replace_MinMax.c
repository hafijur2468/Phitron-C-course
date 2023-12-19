#include <stdio.h>
#include <limits.h>

int main()
{
    int n, i;
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int min_index, min = INT_MAX;
    int max_index, max = INT_MIN;
    for (i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
            min_index = i;
        }

        if (a[i] > max)
        {
            max = a[i];
            max_index = i;
        }
    }

    int temp = max;
    a[max_index] = a[min_index];
    a[min_index] = temp;
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}