#include <stdio.h>

int main()
{
    int num, tens, ones;

    for(num = 10; num <= 99; num++)
    {
        if(num % 2 != 0)         
        {
            tens = num / 10;
            ones = num % 10;

            if(tens + ones == 7)  
            {
                printf("%d\n", num);
            }
        }
    }
    return 0;
}
