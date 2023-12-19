#include <stdio.h>

int main()
{
    float discount, price;

    scanf("%f %f", &discount, &price);
    float withoutDiscountPrice = price / (1 - (discount) / 100);
    printf("%.2f", withoutDiscountPrice);
    return 0;
}