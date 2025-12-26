#include <stdio.h>
void disp_2digit_odd_sum_tens7()
{
    int i, sum = 0;
    for (i = 10; i <= 99; i++)
    {
        if ((i / 10 == 7) && (i % 2 != 0))
        {
            sum = sum + i;
        }
    }

    printf("%d", sum);
}

int main()
{
    disp_2digit_odd_sum_tens7();
    return 0;
}
