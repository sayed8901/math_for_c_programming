#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <math.h>

int main()
{
    // input: max input number should be within 259572
    // output: total prime num from 1 to 259572 is: 22801

    int n;
    scanf("%d", &n);

    int ar[n];
    for (int i = 0; i < n; i++)
    {
        ar[i] = i + 1;
        // printf("%d ", ar[i]);
    }

    int squared_num = sqrt(n);
    int prime_num_arr[n];
    for (int i = 0; i < n; i++)
    {
        prime_num_arr[i] = 0;
    }

    for (int j = 2; j <= squared_num; j++)
    {
        for (int i = j; i < n; i++)
        {
            if (ar[i] % j == 0)
            {
                ar[i] = 0;
            }
        }
    }

    int prime_counter = 0;
    for (int i = 1; i < n; i++)
    {
        if (ar[i] != 0)
        {
            printf("%d ", ar[i]);
            prime_counter++;
        }
    }

    printf("\n\nTotal prime numbers from 1 to %d is: %d", n, prime_counter);

    return 0;
}