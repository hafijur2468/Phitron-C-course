#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    char a[1000000];
    scanf("%s", a);
    int i;
    for (i = 0; i < strlen(a); i++)
    {
        if (a[i] >= 65 && a[i] <= 90)
        {
            printf("%c", a[i] + 32);
        }
        else if (a[i] == 44)
        {
            printf("%c", 44 - 12);
        }
        else if (a[i] >= 97 && a[i] <= 122)
        {
            printf("%c", a[i] - 32);
        }
    }
    return 0;
}