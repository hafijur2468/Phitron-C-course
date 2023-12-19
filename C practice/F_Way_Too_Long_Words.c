#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int i, n;
    scanf("%d", &n);
    char s[n][101];

    for (i = 0; i < n; i++)
    {
        scanf("%s", s[i]);
    }

    for (i = 0; i < n; i++)
    {
        int len = strlen(s[i]);
        if (len <= 10)
        {
            printf("%s\n", s[i]);
        }
        else
        {
            printf("%c%d%c\n", s[i][0], (len - 2), s[i][len - 1]);
        }
    }
    return 0;
}