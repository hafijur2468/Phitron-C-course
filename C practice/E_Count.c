#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char s[1000001];
    scanf("%s", s);
    int sum = 0;
    int i;
    for (i = 0; i < strlen(s); i++)
    {
        sum = sum + s[i] - 48;
    }
    printf("%d", sum);
    return 0;
}