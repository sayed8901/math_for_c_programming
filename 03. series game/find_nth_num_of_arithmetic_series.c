#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
    int first_num, second_num, third_num;
    int n;

    scanf("%d %d %d", &first_num, &second_num, &third_num);
    scanf("%d", &n);

    int difference = third_num - second_num;

    // formula:
    // find_nth_num_of_arithmetic_series ==>
    // n/2 * {2a + (n+1)d)};

    int nth_num = first_num + ((n - 1) * difference);

    printf("nth_num of the series is: %d", nth_num);

    return 0;
}