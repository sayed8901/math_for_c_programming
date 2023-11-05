#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%d", &n);

    long long int factorial = n;

    for (int i = n - 1; i >= 1; i--)
    {
        long long int calculation = factorial * i;
        // printf("%lld * %d = %lld\n", factorial, i, calculation);
        factorial = calculation;
    }

    printf("factorial of %d is: %lld", n, factorial);

    return 0;
}