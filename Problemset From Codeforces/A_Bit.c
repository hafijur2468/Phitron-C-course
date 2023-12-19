#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    int bitvar = 0;
    char a[6];
    for (int i = 0; i < n; i++)
    {
        scanf("%s", a);
        if (strstr(a, "++") != NULL)
        {
            bitvar++;
        }
        else
        {
            bitvar--;
        }
    }

    printf("%d\n", bitvar);
    return 0;
}