#include <stdio.h>

int main()
{
    int N;

    scanf("%d", &N);

    int spc = (N - 1);

    int num = 1;

    for (int i = 1; i <= N; i++)
    {

        for (int j = spc; j > 0; j--)
        {
            printf(" ");
        }

        spc--;

        for (int j = num; j >= 1; j--)
        {
            printf("%d", j);
        }

        num++;

        printf("\n");
    }

    return 0;
}