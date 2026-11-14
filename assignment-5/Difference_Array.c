#include <stdio.h>

void differentiate()
{
    int N;

    scanf("%d", &N);

    int A[N], B[N], C[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < N; i++)
    {
        B[i] = A[i];
    }

    for (int i = 0; i < N - 1; i++)
    {
        for (int j = i; j < N; j++)
        {
            if (B[i] > B[j])
            {
                int tmp;
                tmp = B[i];
                B[i] = B[j];
                B[j] = tmp;
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        C[i] = A[i] - B[i];
        if (C[i] < 0)
        {
            C[i] = C[i] * -1;
        }
    }

    for (int i = 0; i < N; i++)
    {
        printf("%d ", C[i]);
    }
}

int main()
{
    int T;

    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        differentiate();
        printf("\n");
    }

    return 0;
}