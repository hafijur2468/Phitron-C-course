#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    char ch;
    char s[100], sen[100];
    scanf("%c", &ch);
    scanf(" %s ", &s);
    scanf("%[^\n]%*c", &sen); //! String Input method.

    printf("%c\n%s\n%s ", ch, s, sen);
    return 0;
}
