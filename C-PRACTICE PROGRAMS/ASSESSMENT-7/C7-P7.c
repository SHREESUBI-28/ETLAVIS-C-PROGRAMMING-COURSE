#include <stdio.h>
void disp_2digit_odd_sum7()
{
    int i, tens, ones;
    for (i = 10; i <= 99; i++)
    {
        if (i % 2 != 0)
        {
            tens = i / 10;
            ones = i % 10;

            if (tens + ones == 7)
            {
                printf("%d ", i);
            }
        }
    }
}

int main()
{
    disp_2digit_odd_sum7();
    return 0;
}
