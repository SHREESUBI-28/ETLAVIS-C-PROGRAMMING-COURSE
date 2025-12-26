#include <stdio.h>
void disp_single_digit_prime()
{
    int num, digit, count = 0;
    scanf("%d", &num);
    while (num > 0)
    {
        digit = num % 10;

        if (digit == 2 || digit == 3 || digit == 5 || digit == 7)
            count++;

        num = num / 10;
    }
    printf("%d", count);
}
int main()
{
    disp_single_digit_prime();
    return 0;
}
