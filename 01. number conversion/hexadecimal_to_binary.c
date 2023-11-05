#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char ch[100];
    scanf("%s", ch);
    int len = strlen(ch);

    printf("Binary number of hexadecimal %s is: ", ch);
    for (int i = 0; i < len; i++)
    {
        // printf("%c ", ch[i]);
        if (ch[i] == '0')
            printf("0000");
        else if (ch[i] == '1')
            printf("0001");
        else if (ch[i] == '2')
            printf("0010");
        else if (ch[i] == '3')
            printf("0011");
        else if (ch[i] == '4')
            printf("0100");
        else if (ch[i] == '5')
            printf("0101");
        else if (ch[i] == '6')
            printf("0110");
        else if (ch[i] == '7')
            printf("0111");
        else if (ch[i] == '8')
            printf("1000");
        else if (ch[i] == '9')
            printf("1001");
        else if (ch[i] == 'A')
            printf("1010");
        else if (ch[i] == 'B')
            printf("1011");
        else if (ch[i] == 'C')
            printf("1100");
        else if (ch[i] == 'D')
            printf("1101");
        else if (ch[i] == 'E')
            printf("1110");
        else if (ch[i] == 'F')
            printf("1111");
    }

    return 0;
}