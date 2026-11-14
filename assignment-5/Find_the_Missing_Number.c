#include <stdio.h>

void finding_value()
{
    long long int M;

    scanf("%lld", &M);

    int arr[3];

    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &arr[i]);
    }

    if (M % (arr[0] * arr[1] * arr[2]) != 0)
    {
        printf("%d\n", -1);
        return;
    }

    printf("%lld\n", M / (arr[0] * arr[1] * arr[2]));
}

int main()
{
    int T;

    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        finding_value();
    }

    return 0;
}