#include <stdio.h>
void middle_2digits_prime()
{
    int num, mid, i, count = 0;
    scanf("%d", &num);
    mid = (num / 10) % 100;
    for (i = 1; i <= mid; i++)
    {
        if (mid % i == 0)
            count++;
    }

    if (count == 2)
        printf("Prime");
    else
        printf("Not Prime");
}
int main()
{
    middle_2digits_prime();
    return 0;
}
