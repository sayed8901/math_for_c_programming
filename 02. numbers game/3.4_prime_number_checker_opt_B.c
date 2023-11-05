#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    scanf("%d", &num);

    // as we know, any number is divisible by 1 & the number itself
    int divisor_count = 2;

    int sqr_root_n = floor(sqrt(num));
    // printf("sqr_root: %d\n", sqr_root_n);

    if (num >= 1)
    {
        // we can find out if there is any divisor of a particular number by iterating from 2 to sqr root of that number.
        for (int i = 2; i <= sqr_root_n; i++)
        {
            if (num % i == 0)
            {
                divisor_count++;
            }
        }

        if (divisor_count > 2)
        {
            printf("%d is not a prime number", num);
        }
        else
        {
            printf("%d is a prime number", num);
        }
    }

    return 0;
}