#include <stdio.h>
void check_last_digit_odd()
{
    int num, last, result;
    scanf("%d", &num);
    last = num % 10;
    if (last % 2 == 0)
    {
        printf("%d", num);
    }
    else
    {
        result = num - 1;
        printf("%d", result);
    }
}
int main()
{
    check_last_digit_odd();
    return 0;
}
