#include <stdio.h>
void count_total_digits()
{
    int num, count = 0;
    scanf("%d", &num);

    while (num > 0)
    {
        count++;
        num = num / 10;
    }

    printf("%d", count);
}
int main()
{
    count_total_digits();
    return 0;
}
