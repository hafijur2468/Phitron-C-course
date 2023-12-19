#include <stdio.h>
#include <string.h>

int main()
{
    char numberofchars[101];
    fgets(numberofchars, 101, stdin);

    int numbers[101];
    
    int len = strlen(numberofchars);

    for (int i = 0; i < len - 1; i += 2)
    {
        for (int j = i + 2; j < len; j += 2)
        {
            if (numberofchars[i] > numberofchars[j])
            {
                char t = numberofchars[i];
                numberofchars[i] = numberofchars[j];
                numberofchars[j] = t;
            }
        }
    }

    for (int i = 0; i <len; i++)
    {
        printf("%c", numberofchars[i]);
    }

    return 0;
}