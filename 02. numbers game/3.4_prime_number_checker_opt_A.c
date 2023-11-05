#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    int divisor = 0;

    if (num >= 1)
    {
        for (int i = 1; i <= num; i++)
        {
            if (num % i == 0)
            {
                divisor++;
            }
            if (divisor == 3)
                break;
        }

        if (divisor > 2)
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