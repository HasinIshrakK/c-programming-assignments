#include <stdio.h>

int main()
{
    int N;

    scanf("%d", &N);

    int spc = (N - 1);

    int sgn = 1;

    for (int i = 1; i <= N; i++)
    {

        for (int j = spc; j > 0; j--)
        {
            printf(" ");
        }

        spc--;

        for (int j = 1; j <= sgn; j++)
        {
            if (i % 2 == 0)
            {
                printf("-");
            }
            else
                printf("#");
        }

        sgn = sgn + 2;

        printf("\n");
    }

    spc = 1;

    sgn = (N - 1) * 2 - 1;

    for (int i = N - 1; i > 0; i--)
    {

        for (int j = 1; j <= spc; j++)
        {
            printf(" ");
        }

        spc++;

        for (int j = sgn; j > 0; j--)
        {
            if (i % 2 == 0)
            {
                printf("-");
            }
            else
                printf("#");
        }

        sgn = sgn - 2;

        printf("\n");
    }
    return 0;
}