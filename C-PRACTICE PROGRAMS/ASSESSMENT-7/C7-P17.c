#include <stdio.h>
void check_prime_and_sum14()
{
    int num, temp, i, count = 0, sum = 0;
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
            count++;
    }
    temp = num;
    while (temp > 0)
    {
        sum = sum + (temp % 10);
        temp = temp / 10;
    }
    if (count == 2 && sum == 14)
        printf("Prime & sum of digits is 14");
    else if (count != 2 && sum == 14)
        printf("Not Prime but sum of digits is 14");
    else if (count == 2 && sum != 14)
        printf("Prime & sum of digits is not 14");
    else
        printf("Not Prime & Sum of Digits is not 14");
}
int main()
{
    check_prime_and_sum14();
    return 0;
}
