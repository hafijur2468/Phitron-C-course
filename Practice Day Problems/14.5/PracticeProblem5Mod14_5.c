#include <stdio.h>

char capital_to_small(char a)
{
    int cap = a + 32;
    return cap;
}

int main()
{
    char c;
    scanf("%c", &c);
    printf("%c", capital_to_small(c));

    return 0;
}