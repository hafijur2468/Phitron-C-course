#include <stdio.h>

void print_num(int num)
{

    if (num == 0)
        return;
    print_num(num - 1);
    printf("%d\n", num);
}

int main()
{
    int num;
    scanf("%d", &num);
    print_num(num);
    return 0;
}