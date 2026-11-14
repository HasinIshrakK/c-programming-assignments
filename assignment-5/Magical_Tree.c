#include <stdio.h>

int main()
{
    int N, star = 1, space, sp;

    scanf("%d", &N);

    sp = 5 + (N + 1) / 2;
    space = 5 + (N - 1) / 2;

    for (int i = 0; i < sp; i++)
    {
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }
        space--;

        for (int j = 1; j <= star; j++)
        {
            printf("*");
        }
        star = star + 2;

        printf("\n");
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < N; k++)
        {
            printf("*");
        }
        // for (int j = 0; j < 5; j++)
        // {
        //     printf(" ");
        // }
        printf("\n");
    }

    return 0;
}