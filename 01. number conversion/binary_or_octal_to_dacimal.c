#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <math.h>

int main()
{
    char n[100];
    scanf("%s", n);

    int base;
    scanf("%d", &base);

    int len = strlen(n);
    // printf("num: %s, len: %d\n", n, len);

    int sum = 0;

    for (int i = 0; i < len; i++)
    {
        int digit = n[i] - '0';
        // printf("%d\n", digit);

        int calculation = digit * pow(base, ((len - 1) - i));
        sum = sum + calculation;
    }

    if (base == 2)
    {
        printf("Decimal Num of Binary %s is: %d", n, sum);
    }
    else if (base == 8)
    {
        printf("Decimal Num of Octal %s is: %d", n, sum);
    }

    return 0;
}