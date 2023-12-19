#include <stdio.h>
#include <string.h>

int main()
{
    // char a[20];
    // fgets(a, 20, stdin);
    // printf("%s", &a);

    char a[100];
    scanf("%s", a);
    int sz = strlen(a);
    // int i = 0, count = 0;
    // while (a[i] != '\0')
    // {
    //     count++;
    //     i++;
    // }
    printf("%d", sz);
    return 0;
}