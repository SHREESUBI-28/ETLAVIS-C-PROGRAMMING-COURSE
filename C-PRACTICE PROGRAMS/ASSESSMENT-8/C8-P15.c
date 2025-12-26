#include <stdio.h>
int disp_single_digit_prime(long int num)
{
    int digit, count = 0;
    while (num > 0)
    {
        digit = num % 10;

        if (digit == 2 || digit == 3 || digit == 5 || digit == 7)
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
    result = disp_single_digit_prime(num);
    printf("%d", result);

    return 0;
}
