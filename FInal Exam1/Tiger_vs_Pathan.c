#include <stdio.h>
#include <string.h>

int main()
{
    int testCase, round;

    scanf("%d", &testCase);
    for (int i = 0; i < testCase; i++)
    {
        scanf("%d", &round);
        char round_str[round + 1];
        scanf("%s", &round_str);
        int pathaan = 0, tiger = 0;
        for (int j = 0; round_str[j] != '\0'; j++)
        {
            if (round_str[j] == 'T')
            {
                tiger++;
            }
            else
            {
                pathaan++;
            }
        }

        if (tiger > pathaan)
        {
            printf("Tiger\n");
        }
        else if (pathaan > tiger)
        {
            printf("Pathaan\n");
        }
        else
        {
            printf("Draw\n");
        }
    }
    return 0;
}