#include <stdio.h>

int main()
{
    int n, m, i;
    scanf("%d %d", &n, &m);
    int num[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }

    int count[m + 1];

    for (i = 0; i <= m; i++)
    {
        count[i] = 0; // Initialize count to 0
    }

    for (i = 0; i < n; i++)
    {
        if (num[i] >= 0 && num[i] <= m)
        {
            count[num[i]]++;
        }
    }

    for (i = 1; i <= m; i++)
    {
        printf("%d\n", count[i]);
    }

    return 0;
}
