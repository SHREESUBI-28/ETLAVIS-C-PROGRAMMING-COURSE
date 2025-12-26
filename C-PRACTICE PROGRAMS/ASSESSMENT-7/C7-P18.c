#include <stdio.h>
void check_first_2digits_prime()
{
    int num, first2, i, count = 0;
    scanf("%d", &num);
    first2 = num % 100;
   for (i = 1; i <= first2; i++)
    {
        if (first2 % i == 0)
            count++;
    }
    if (count == 2)
        printf("Prime");
    else
        printf("Not Prime");
}
int main()
{
    check_first_2digits_prime();
    return 0;
}
