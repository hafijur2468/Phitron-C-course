#include <stdio.h>

void print_num(int num)
{

    if (num == 0)
    {
        return;
    }
    if (num == 1)
    {
        printf("%d", num);
    }
    else
    {
        printf("%d ", num);
    }
    print_num(num - 1);
}

int main()
{
    int num;
    scanf("%d", &num);
    print_num(num);
    return 0;
}