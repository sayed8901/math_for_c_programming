#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%d", &n);

    int divisor;
    scanf("%d", &divisor);

    int remainder_arr[n];
    for (int i = 0; i <= n; i++)
    {
        remainder_arr[i] = -1;
    }

    int quotient, remainder;
    int temp = n;

    while (temp > 0)
    {
        quotient = temp / divisor;
        remainder = temp % divisor;
        // printf("%d / %d, res:%d, remain:%d\n", temp, divisor, quotient, remainder);

        remainder_arr[temp] = remainder;
        temp = quotient;
    }

    // printf("\n");
    if (divisor == 2)
    {
        printf("Binary number of decimal %d is: ", n);
    }
    else if (divisor == 8)
    {
        printf("Octal number of decimal %d is: ", n);
    }

    for (int i = 0; i <= n; i++)
    {
        if (remainder_arr[i] >= 0)
        {
            printf("%d", remainder_arr[i]);
        }
    }

    return 0;
}