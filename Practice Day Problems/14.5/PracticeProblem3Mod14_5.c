#include <stdio.h>

int char_to_ascii(char a)
{
    int digit = a;
    return digit;
}

int main()
{
    char character;
    scanf("%c", &character);
    printf("%d\n", char_to_ascii(character));

    return 0;
}