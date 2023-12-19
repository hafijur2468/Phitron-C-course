#include <stdio.h>
#include <conio.h>
#include <math.h>

//! Learned something new. Its Important not to Give up aftar thinking too much.
//* If you cant figure out search online.
//? But Never ever give up.
//! As a math Student I don't Understand a Simple problem.

int main()
{
    int n;
    scanf("%d", &n);
    int reversed = 0, remainder, original;
    original = n;

    while (n != 0)
    {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n = n / 10;
    }

    if (original == reversed)
    {
        printf("%d\nYES", reversed);
    }
    else
    {
        printf("%d\nNO", reversed);
    }
    return 0;
}