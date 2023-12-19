#include <stdio.h>

int main()
{
    int n, i = 0;
    scanf("%d", &n);
    char a[n + 1];

    for (i = 0; i < n; i++)
    {
        while (scanf("%c", &a[i]) != EOF)
        {

            if (a[i] > a[i + 1])
            {
                char temp;
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
                i++;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        printf("%c", a[i]);
    }
    return 0;
}