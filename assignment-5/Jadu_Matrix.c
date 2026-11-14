#include <stdio.h>

int main()
{
    int M, N;

    scanf("%d %d", &N, &M);

    int a[N][M];

    if (N != M)
    {
        printf("NO");
        return 0;
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if ((i == j || i + j == N - 1) && a[i][j] != 1)
            {
                printf("NO");
                return 0;
            }
            else if (i != j && i + j != N - 1 && a[i][j] != 0)
            {
                printf("NO");
                return 0;
            }
        }
    }

    printf("YES");

    return 0;
}