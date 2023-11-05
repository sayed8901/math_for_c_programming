#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
    int first_num, second_num, third_num;
    float n;

    scanf("%d %d %d", &first_num, &second_num, &third_num);
    scanf("%f", &n);

    int difference = third_num - second_num;

    // formula:
    // sum_of_first_n_numbers_of_arithmetic_series ==>
    // n/2 * {2a + (n+1)d)};

    int sum = (n / 2) * ((2 * first_num) + ((n - 1) * difference));

    printf("sum of first %0.f number of the arithmetic series is: %d", n, sum);

    return 0;
}