#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int a, b;
    float c, d;
    scanf("%d %d", &a, &b);
    int sum = a + b;
    int difff = a - b;
    printf("%d %d\n", sum, difff);

    scanf("%f %f", &c, &d);
    float fsum = c + d;
    float fdiff = c - d;
    printf("%.1f %.1f", fsum, fdiff);

    return 0;
}