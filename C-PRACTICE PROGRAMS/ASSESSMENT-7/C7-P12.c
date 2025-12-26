#include <stdio.h>
void disp_sum_all_digits()
{
    int num, sum = 0;
    scanf("%d", &num);

    while (num > 0)
    {
        sum = sum + (num % 10);
        num = num / 10;
    }

    printf("%d", sum);
}

int main()
{
    disp_sum_all_digits();
    return 0;
}
