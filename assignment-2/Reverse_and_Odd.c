#include <stdio.h>

int main ()
{
    int N;

    scanf("%d\n", &N);

    int A[N];
    int b[N];

    for (int i = 0; i <= N; i++) {
        
        scanf("%d ", &A[i]);

        if (i % 2 == 1) {
            b[i] = A[i];
        } else b[i] = 0;
    }

    for (int i = N-1; i >= 0; i--) {
        
        if (b[i] != 0) {
            printf("%d ", b[i]);
        } else continue;
    }

    return 0;
}