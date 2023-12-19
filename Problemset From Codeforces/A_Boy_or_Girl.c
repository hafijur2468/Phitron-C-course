#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    char username[101];

    fgets(username, 101, stdin);

    int distinct_count = 0, len = strlen(username);

    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 1; j < len; j++)
        {
            if (username[i] != username[j])
            {
                continue;
            }
            else
            {
                distinct_count++;
            }
        }
    }
    printf("%d", distinct_count);
    return 0;
}