#include <stdio.h>
int main()
{
    int num = 9999;
    while (num >= 1000)
    {
        if (num % 7 == 0 && num % 9 == 0)
        {
            printf("%d", num);
            break;
        }
        num--;
    }
}
