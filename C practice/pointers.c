// #include <stdio.h>
// #include <conio.h>
// #include <math.h>

// int main()
// {
//     int x = 10;
//     int *ptr = &x;
//     int *ptr2 = ptr;
//     *ptr2 = 999;

//     printf("%d %d %d", x, ptr, *ptr2);
//     return 0;
// }

#include <stdio.h>
void m(int *p)

{
    int i = 0;

    for (i = 0; i < 5; i++)

        printf("%d ", *(p + i));
}

int main()

{
    int a[5] = {6, 5, 3};
    m(a);
}