#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
    int n1, n2;
    scanf("%d %d", &n1, &n2);

    int n1_divisor_ar[n1];
    for (int i = 0; i < n1; i++)
    {
        n1_divisor_ar[i] = 0;
    }

    for (int i = 1; i <= n1; i++)
    {
        if (n1 % i == 0)
        {
            n1_divisor_ar[i - 1] = i;
        }
    }

    for (int i = 0; i < n1; i++)
    {
        if (n1_divisor_ar[i] != 0)
        {
            printf("%d ", n1_divisor_ar[i]);
        }
    }

    return 0;
}