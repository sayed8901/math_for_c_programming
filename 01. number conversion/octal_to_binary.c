#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <math.h>

int main()
{
    long long int n;
    scanf("%lld", &n);

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
        quotient = temp / 10;
        remainder = temp % 10;
        // printf("%lld / %d, res:%lld, remain:%lld\n", temp, divisor, quotient, remainder);

        temp = quotient;
        // printf("%lld ", remainder);

        remainder_ar[i] = remainder;
    }

    printf("Binary number of Octal %lld is: ", n);

    for (int i = 30 - 1; i >= 0; i--)
    {
        if (remainder_ar[i] != 0)
        {
            // printf("%d ", remainder_ar[i]);
            if (remainder_ar[i] == 0)
                printf("%s", "000");
            if (remainder_ar[i] == 1)
                printf("%s", "001");
            if (remainder_ar[i] == 2)
                printf("%s", "010");
            if (remainder_ar[i] == 3)
                printf("%s", "011");
            if (remainder_ar[i] == 4)
                printf("%s", "100");
            if (remainder_ar[i] == 5)
                printf("%s", "101");
            if (remainder_ar[i] == 6)
                printf("%s", "110");
            if (remainder_ar[i] == 7)
                printf("%s", "111");
        }
    }

    return 0;
}