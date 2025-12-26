#include <stdio.h>
int disp_2digit_odd_sum_tens7()
{
    int i, sum = 0;
    for (i = 10; i <= 99; i++)
    {
        if ((i / 10 == 7) && (i % 2 != 0))
        {
            sum = sum + i;
        }
    }
    return sum;
}
int main()
{
    int result;
    result = disp_2digit_odd_sum_tens7();
    printf("%d", result);
    return 0;
}
