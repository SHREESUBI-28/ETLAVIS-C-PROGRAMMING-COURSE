#include <stdio.h>
int disp_2digit_even_sum6()
{
    int i, j, count = 0, flag;
    for (i = 2; i <= 9; i++)
    {
        flag = 1;
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            count++;
    }
    return count;
}
int main()
{
    int result;
    result = disp_2digit_even_sum6();
    printf("%d", result);
    return 0;
}
