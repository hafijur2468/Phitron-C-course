#include <stdio.h>
#include <conio.h>

int main()
{
    int n;
    scanf("%d", &n);
    char a[n + 1];
    scanf("%s", a); // Removed the '&' before a

    for (int i = 0; i < n; i++) // Changed the second for loop condition from i <= n to i < n
    {
        for (int j = i + 1; j < n; j++) // Changed the loop starting index from 1 to i + 1
        {
            if (a[j] < a[i])
            {
                char temp;
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("%s", a);
    return 0; // Added a return statement
}
