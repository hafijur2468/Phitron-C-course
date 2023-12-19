#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    char s[100001];
    int i, consonant = 0;
    scanf("%s", s);
    for (i = 0; i < strlen(s); i++)
    {
        if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u')
        {
            consonant++;
        }
    }

    printf("%d", consonant);

    return 0;
}