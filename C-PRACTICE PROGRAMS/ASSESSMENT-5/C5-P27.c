#include <stdio.h>

int main()
{
    int i, temp, sum, count = 0;
    for(i = 1; i < 100000; i++)
    {
        temp = i;
        sum = 0;
        while(temp > 0)
        {
            sum = sum + (temp % 10);
            temp = temp / 10;
        }
        if(sum == 14)
            count++;
    }
    printf("%d", count);
    return 0;
}
