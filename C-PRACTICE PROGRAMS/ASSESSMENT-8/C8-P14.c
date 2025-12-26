#include <stdio.h>
int disp_two_digit_square(long int num)
{
    int two_digit, count = 0;
    while (num >= 10)
    {
        two_digit = num % 100;

        if (two_digit == 16 || two_digit == 25 || two_digit == 36 ||
            two_digit == 49 || two_digit == 64 || two_digit == 81)
        {
            count++;
        }

        num = num / 10;
    }
    return count;
}
int main()
{
    long int num;
    int result;
    scanf("%ld", &num);
    result = disp_two_digit_square(num);
    printf("%d", result);
    return 0;
}
