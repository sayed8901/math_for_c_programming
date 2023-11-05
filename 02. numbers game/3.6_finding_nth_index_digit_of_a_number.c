#include <stdio.h>
#include <math.h>

int main()
{
    int num, digit_position;
    scanf("%d %d", &num, &digit_position);
    int digit_index = digit_position - 1;

    int revised_num = num / pow(10, digit_index);
    int num_at_target_digit = revised_num % 10;

    printf("%d", num_at_target_digit);

    return 0;
}