#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%d", &n);

    int sum = (n * (n + 1)) / 2;

    printf("sum of all the natural numbers from 1 to %d is: %d", n, sum);

    return 0;
}