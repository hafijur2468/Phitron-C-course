#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int advanced = 0;

    for (int i = 0; i < n; i++)
    {
        if(a[i] >0 && a[i]>=a[k-1]){
            advanced++;
        }
    }

    printf("%d", advanced);
    return 0;
}