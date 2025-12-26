#include <stdio.h>
int check_last_digit_odd(int num)
{
    int last;
    last = num % 10;

    if (last % 2 == 0)
        return num;
    else
        return num - 1;
}
int main()
{
    int num, result;
    scanf("%d", &num);
    result = check_last_digit_odd(num);
    printf("%d", result);
    return 0;
}
