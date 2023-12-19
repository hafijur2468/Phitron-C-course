#include <stdio.h>

void swap_it(int *a, int *b)
{
    int c = *b;
    int d = *a;
    *a = c;
    *b = d;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int *p = &a;
    int *q = &b;

    swap_it(p, q);

    printf("%d %d", a, b);

    return 0;
}