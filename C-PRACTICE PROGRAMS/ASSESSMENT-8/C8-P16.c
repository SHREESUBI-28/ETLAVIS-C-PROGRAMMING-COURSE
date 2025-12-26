#include <stdio.h>
int disp_biggest_4digit_div7_9()
{
    int num;
    for (num = 9999; num >= 1000; num--)
    {
        if (num % 7 == 0 && num % 9 == 0)
        {
            return num;
        }
    }

    return 0;
}
int main()
{
    int result;
    result = disp_biggest_4digit_div7_9();
    printf("%d", result);
    return 0;
}
