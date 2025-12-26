#include <stdio.h>
int disp_sum_all_digits(int num)
{
    int sum = 0;
    while (num > 0)
    {
        sum = sum + (num % 10);
        num = num / 10;
    }
    return sum;
}
int main()
{
    int num, result;
    scanf("%d", &num);
    result = disp_sum_all_digits(num);
    printf("%d", result);
    return 0;
}
