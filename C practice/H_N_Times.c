#include <stdio.h>
#include <conio.h>
#include <math.h>

void printing_character(int a, char b)
{
    for (int i = 1; i <= a; i++)
    {
        printf("%c ", b);
    }
    printf("\n");
}

int main()
{
    int n, a, b;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d %c", &a, &b);
        printing_character(a, b);
    }

    return 0;
}
