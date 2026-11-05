#include <stdio.h>
#include <string.h>

int is_palindrome(char S[])
{
    int n = strlen(S);

    for (int i = 0; i < n; i++)
    {
        if (S[i] != S[n - 1])
        {
            return 0;
        }

        n--;
    }

    return 1;
}

int main()
{
    char S[1001];

    scanf("%s", S);

    if (is_palindrome(S))
    {
        printf("Palindrome");
    }
    else
        printf("Not Palindrome\n");

    return 0;
}