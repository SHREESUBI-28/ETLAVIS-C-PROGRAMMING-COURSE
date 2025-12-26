#include <stdio.h>
int count_total_digits(int num)
{
    int count = 0;
    while (num > 0)
    {
        count++;
        num = num / 10;
    }
    return count;
}
int main()
{
    int num, result;
    scanf("%d", &num);
    result = count_total_digits(num);
    printf("%d", result);
    return 0;
}
