#include <stdio.h>

void even_ind(int a[], int n)
{

    if (n < 0)
        return;

    int i = n % 2;

    if (i == 0)
    {
        printf("%d ", a[n]);
    }

    even_ind(a, n - 1);
    // even_ind(a, n + 1);
}

int main()
{
    int num;
    scanf("%d", &num);
    int a[num];

    for (int i = 0; i < num; i++)
    {
        scanf("%d", &a[i]);
    }

    even_ind( a, num-1);

    return 0;
}