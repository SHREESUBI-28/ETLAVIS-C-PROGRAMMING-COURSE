#include <stdio.h>
void find_2digit_odd_sum7()
{
    int num = 11;
    int *p = &num;
    while (*p <= 99)
    {
        int tens = (*p) / 10;
        int ones = (*p) % 10;

        if ((*p % 2 != 0) && (tens + ones == 7))
        {
            printf("%d ", *p);
        }
        (*p)++;
    }
}
int main()
{
    find_2digit_odd_sum7();
    return 0;
}
