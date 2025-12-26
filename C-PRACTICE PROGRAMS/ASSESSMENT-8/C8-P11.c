#include <stdio.h>
int disp_total_odd_digits(int num)
{
    int digit, count = 0;
    while (num > 0)
    {
        digit = num % 10;
        if (digit % 2 != 0)
            count++;
        num = num / 10;
    }
    return count;
}
int main()
{
    int num, result;
    scanf("%d", &num);
    result = disp_total_odd_digits(num);
    printf("%d", result);
    return 0;
}
