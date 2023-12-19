#include <stdio.h>

int main()
{
    int n, sum = 0;
    scanf("%d", &n);
    char strnum[n];
    scanf("%s", strnum);

    for (int i = 0; i < n; i++)
    {
        int digit = strnum[i] - 48;
        sum += digit;
    }
    printf("%d\n", sum);

    return 0;
}