#include <stdio.h>
int disp_reverse_number(int num)
{
    int rev = 0;
    while (num > 0)
    {
        rev = rev * 10 + (num % 10);
        num = num / 10;
    }
    return rev;
}
int main()
{
    int num, result;
    scanf("%d", &num);
    result = disp_reverse_number(num);
    printf("%d", result);
    return 0;
}
