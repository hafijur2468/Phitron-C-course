#include <stdio.h>
#include <string.h>

void my_len(char ch[])
{
    int count = 0;
    for (int i = 0; ch[i] != '\0'; i++)
    {
        count++;
    }
    printf("%d\n", count);
}

int main()
{
    char ch[20];
    scanf("%s", ch);
    my_len(ch);
    return 0;
}
