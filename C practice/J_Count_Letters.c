#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    char s;
    int i, count[26] = {0};
    while (scanf("%c", &s) != EOF)
    {
        count[s - 97]++;
    }
    for (i = 0; i < 26; i++)
    {
        if (count[i] != 0)
        {
            printf("%c : %d\n", i + 97, count[i]);
        }
    }
    return 0;
}