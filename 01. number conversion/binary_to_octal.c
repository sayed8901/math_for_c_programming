#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <math.h>

int main()
{
    long long int n;
    scanf("%lld", &n);

    int divisor = 1000;

    long long int quotient, remainder;
    long long int temp = n;

    // assume that, max decimal number can be upto 30 digit in length.
    int remainder_ar[30];
    for (int i = 0; i < 30; i++)
    {
        remainder_ar[i] = 0;
    }

    for (int i = 0; temp > 0; i++)
    {
        quotient = temp / divisor;
        remainder = temp % divisor;
        // printf("%lld / %d, res:%lld, remain:%lld\n", temp, divisor, quotient, remainder);

        temp = quotient;
        // printf("%lld ", remainder);

        remainder_ar[i] = remainder;
    }

    printf("Octal number of binary %lld is: ", n);

    for (int i = 30 - 1; i >= 0; i--)
    {
        if (remainder_ar[i] != 0)
        {
            // printf("%d ", remainder_ar[i]);
            if (remainder_ar[i] == 0)
                printf("%d", 0);
            if (remainder_ar[i] == 1)
                printf("%d", 1);
            if (remainder_ar[i] == 10)
                printf("%d", 2);
            if (remainder_ar[i] == 11)
                printf("%d", 3);
            if (remainder_ar[i] == 100)
                printf("%d", 4);
            if (remainder_ar[i] == 101)
                printf("%d", 5);
            if (remainder_ar[i] == 110)
                printf("%d", 6);
            if (remainder_ar[i] == 111)
                printf("%d", 7);
        }
    }

    return 0;
}