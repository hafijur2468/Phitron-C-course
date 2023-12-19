// #include <stdio.h>
// #include <conio.h>
// #include <math.h>

// void fun(int b[], int n, int i)
// {
//     if (i == n)
//         return;
//     printf("%d ", b[i]);
//     fun(b, n, i + 1);
// }

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int a[n];

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     fun(a, n, 0);
//     return 0;
// }

#include <stdio.h>

int fun(char a[], int n)
{
    if (a[n] == '\0')
        return 0;
    int l = fun(a, 1 + n);
    return l + 1;
}

int main()
{
    char a[] = "hhafijur";
    int len = fun(a, 0);
    printf("%d\n", len);

    return 0;
}