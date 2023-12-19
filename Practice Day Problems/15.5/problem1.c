#include <stdio.h>
#include <conio.h>
#include <math.h>
void my_abs(int a)
{
    if (a < 0)
    {
        a = -1 * a;
    }
    else
    {
        a = a;
    }
    printf("%d\n", a);
}
int main()
{
    int n;
    scanf("%d", &n);
    my_abs(n);
    return 0;
}