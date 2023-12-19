#include <stdio.h>
#include <conio.h>
#include <math.h>

int palindrome(int a[], int n, int i)
{
    if (n <= i)
    {
        return 1;
    }

    if (a[i] == a[n - 1])
    {
        return palindrome(a, n - 1, i + 1);
    }
    else
    {
        return 0;
    }
}

int main()
{
    int num;
    scanf("%d", &num);

    int a[num];
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &a[i]);
    }

    int res = palindrome(a, num, 0);

    if (res == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}