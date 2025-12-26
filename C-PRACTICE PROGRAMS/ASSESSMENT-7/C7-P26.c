#include <stdio.h>
void disp_biggest_4digit_div7_9()
{
    int i;
    for (i = 9999; i >= 1000; i--)
    {
        if (i % 7 == 0 && i % 9 == 0)
        {
            printf("%d", i);
            break;
        }
    }
}
int main()
{
    disp_biggest_4digit_div7_9();
    return 0;
}
