#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int n, i;
    scanf("%d", &n);
    char s[10001];
    int cap_count = 0, small_count = 0, num_count = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%s", s);
        int cap_count = 0, small_count = 0, num_count = 0;
        for (int j = 0; j < strlen(s); j++)
        {
            if (s[j] >= 'A' && s[j] <= 'Z')
            {
                cap_count++;
            }
            else if (s[j] >= 'a' && s[j] <= 'z')
            {
                small_count++;
            }
            else
            {
                num_count++;
            }
        }
        printf("%d %d %d\n", cap_count, small_count, num_count);
    }

    return 0;
}