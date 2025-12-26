#include <stdio.h>
int disp_2digit_ones5()
{
    int i, sum = 0;
    for (i = 10; i <= 99; i++)
    {
        if (i % 10 == 5)
        {
            sum = sum + i;
        }
    }
    return sum;
}
int main()
{
    int result;
    result = disp_2digit_ones5();
    printf("%d", result);
    return 0;
}
