#include <stdio.h>
void disp_total_2digit_odd()
{
    int num, pair, count = 0;
    scanf("%d", &num);
    while (num >= 10)
    {
        pair = num % 100;
        if (pair >= 10 && pair % 2 != 0)
            count++;
        num = num / 10;
    }
    printf("%d", count);
}
int main()
{
    disp_total_2digit_odd();
    return 0;
}
