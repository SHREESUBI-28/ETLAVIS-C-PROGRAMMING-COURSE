#include <stdio.h>

int main()
{
    int num = 10, temp, sum;
    while(num <= 99)
    {
        if(num % 2 == 0)  
        {
            temp = num;
            sum = 0;

            while(temp > 0)
            {
                sum = sum + (temp % 10);
                temp = temp / 10;
            }

            if(sum == 6)
                printf("%d\n", num);
        }
        num++;
    }
}
