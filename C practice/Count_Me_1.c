#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    int num[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }

    int two = 0, three = 0;
    for (int i = 0; i < n; i++)
    {
        if (num[i] % 2 == 0)
        {
            two++;
        }
        else if (num[i] % 3 == 0)
        {
            three++;
        }
    }
    printf("%d %d\n", two, three);
    return 0;
}