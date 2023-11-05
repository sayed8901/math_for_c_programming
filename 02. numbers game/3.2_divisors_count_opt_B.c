#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);

    /*
    look at the below example:
    8/1= 8      ok         8/5= 1.6    not ok
    8/2= 4      ok         8/6= 1.33   not ok
    8/3= 2.66   not ok     8/7= 1.14   not ok
    8/4= 2      ok         8/8= 1      ok
    or,
    12/1= 12    ok         12/7= 1.71    not ok
    12/2= 6     ok         12/8= 1.5     not ok
    12/3= 4     not ok     12/9= 1.33    not ok
    12/4= 3     ok         12/10= 1.2    not ok
    12/5= 2.4   not ok     12/11= 1.09   not ok
    12/6= 2     ok         12/12= 1      ok

    ** If we divide any number for example: if we divide 8 by 2, we get 4.
    ** You can notice that, we will find most of the divisors in 1st 4 iterator, i mean in the 1st half part.
    ** So, the number is not divisible in the 2nd half except the last line, all the divisors exist in 1st half part.

    ** So, we can run loop only for the 1st half () instead of looping through until the last iterator of the given number. (n.b.: if any fraction arises from n/2, we will make it floor to get the minimum iterator.)
     */

    // as every positive number (except 1) has 2 divisors in common; these are 1 & the number itself.
    int divisor_count;

    if (n <= 0)
    {
        divisor_count = 0;
    }
    else if (n == 1)
    {
        // to display 1st divisor line
        printf("%d\n", 1);
        divisor_count = 1;
    }
    else if (n > 1)
    {
        // to display 1st divisor line
        printf("%d\n", 1);
        divisor_count = 2;

        for (int i = 2; i <= floor(n / 2); i++)
        {
            if (n % i == 0 && n > 0)
            {
                printf("%d\n", i);
                divisor_count++;
            }
        }

        // to display last divisor line
        printf("%d\n", n);
    }

    printf("total divisor: %d\n", divisor_count);

    return 0;
}