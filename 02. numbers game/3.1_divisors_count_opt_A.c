#include <stdio.h>

int main()
{
    int n, divisor_count = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d\n", i);
            divisor_count++;
        }
    }
    printf("total divisor: %d\n", divisor_count);

    return 0;
}