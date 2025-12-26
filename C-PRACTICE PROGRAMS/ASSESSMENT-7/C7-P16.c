#include <stdio.h>
void check_prime()
{
    int num, i, count = 0;
    scanf("%d", &num);
    if (num <= 1)
    {
        printf("Not Prime");
        return;
    }
    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
        printf("Prime");
    else
        printf("Not Prime");
}

int main()
{
    check_prime();
    return 0;
}
