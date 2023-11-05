#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);

    /*
    look at the below example:
    12/1= 12     ok         12/7= 1.71    not ok
    12/2= 6      ok         12/8= 1.5     not ok
    12/3= 4      not ok     12/9= 1.33    not ok
    12/4= 3      ok         12/10= 1.2    not ok
    12/5= 2.4    not ok     12/11= 1.09   not ok
    12/6= 2      ok         12/12= 1      ok
    or,
    16/1= 16     ok         16/9= 1.77    not ok
    16/2= 8      ok         16/10= 1.6    not ok
    16/3= 5.33   not ok     16/11= 1.45   not ok
    16/4= 4      ok         16/12= 1.33   not ok
    16/5= 2.4    not ok     16/13= 1.23   not ok
    16/6= 2.66   not ok     16/14= 1.14   not ok
    16/7= 2.28   not ok     16/15= 1.06   not ok
    16/8= 2      ok         16/16= 1      ok


    ** আমরা already জানি যে, কোন সংখ্যার (শুধৃমাত্র শেষের-টা বাদে বাকি) সমস্ত divisor-গুলো তার 1st half iterator এর মধ্যে পাওয়া যায়।

    ** এখন যদি আমরা 1st half part কে আরও একটু ভালোভাবে লক্ষ্য করি তখন দেখতে পাবো যে, কোন সংখ্যাকে যদি (যেমন: এখানে 12 কে) কোন সংখ্যা (যেমন: যদি 2) দিয়ে ভাগ করে ভাগশেষ 0 পাওয়া যায়, তাহলে সেটিকে এবং যে ভাগফল পাওয়া যাবে (যেমন: এক্ষেত্রে 6) সেটিও উক্ত সংখ্যার  (12 এর) divisor হয়ে থাকে।
    * (কেননা, পরবর্তীতে 6 দিয়ে ভাগ করেও দেখা যাবে ভাগশেষ 0 পাওয়া যায়, অর্থ্যাৎ এই 6 কে আমরা আগেই (2 নিয়ে যখন কাজ করেছি তখনই) পেয়ে গিয়েছিলাম, তাই পরে আবার 6 পর্যন্ত iterate করার দরকার নেই)

    ** অর্থ্যাৎ, লক্ষ্য করলে দেখা যাবে, 16 এর জন্য 1ম 4 টা iterator এর মধ্যে থেকেই (ভাজক এবং ভাগশেষ consider করলে) 16 এর সকল divisor গুলো পাওয়া যায়।
    * এছাড়াও, 16 কে ‍sqr root করলেই 4 পাওয়া যায়, অর্থ্যাৎ, যেকোন সংখ্যার ‍sqr root পর্যন্ত loop করেই কাংখিত ফল বের আনা সম্ভব। (উল্লেখ্য, 12 এর sqr root 3.46... এরকম ক্ষেত্রে এর floor value মানে 3 নিলেই চলবে)
     */

    int sqr_root_n = floor(sqrt(n));
    // printf("sqr_root: %d\n", sqr_root_n);

    int divisor_count = 0;

    for (int i = 1; i <= sqr_root_n; i++)
    {
        if (n % i == 0)
        {
            int divide_result = n / i;
            if (i != divide_result)
            {
                /*
                2 added to initial divisor_count.
                It means: one is the divisor &
                another in the divide_result i mean the quotient
                 */
                printf("%d\n", i);
                printf("%d\n", divide_result);
                divisor_count = divisor_count + 2;
            }
            else
            {
                printf("%d\n", i);
                divisor_count++;
            }
        }
    }

    printf("total divisor: %d\n", divisor_count);

    return 0;
}