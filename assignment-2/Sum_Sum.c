#include <stdio.h>

int main()
{
    int N;

    scanf("%d\n", &N);

    int pos = 0;
    int neg = 0;

    for (int i = 0; i < N; i++)
    {

        int V;

        scanf("%d ", &V);

        if (V > 0)
        {
            pos = pos + V;
        }
        else
            neg = neg + V;
    }

    printf("%d %d", pos, neg);

    return 0;
}