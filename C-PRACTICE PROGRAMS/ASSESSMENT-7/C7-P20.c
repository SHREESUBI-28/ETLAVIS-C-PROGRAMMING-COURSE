#include <stdio.h>
void count_single_digit_primes()
{
    int count = 0, i, j, factors;
    for (i = 2; i <= 9; i++)
    {
        factors = 0;
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
                factors++;
        }
        if (factors == 2)
            count++;
    }
    printf("%d", count);
}
int main()
{
    count_single_digit_primes();
    return 0;
}
