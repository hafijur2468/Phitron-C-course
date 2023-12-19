#include <stdio.h>
#include <conio.h>
#include <math.h>

int vowel_check(char sent[], int i)
{
    if (sent[i] == '\0')
    {
        return 0;
    }
    int ans = vowel_check(sent, i + 1);

    if (sent[i] >= 'A' && sent[i] <= 'Z')
    {
        sent[i] = sent[i] + 32;
    }

    if (sent[i] == 'a' || sent[i] == 'e' || sent[i] == 'i' || sent[i] == 'o' || sent[i] == 'u')
    {
        return ans + 1;
    }
    else
    {
        return ans;
    }
}

int main()
{
    char sent[201];
    fgets(sent, 201, stdin);
    printf("%d", vowel_check(sent,0));

    return 0;
}