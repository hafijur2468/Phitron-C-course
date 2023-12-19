#include <stdio.h>

char small_to_capital(char a)
{
    int cap = a - 32;
    return cap;
}

int main()
{
    char c;
    scanf("%c", &c);
    printf("%c", small_to_capital(c));

    return 0;
}