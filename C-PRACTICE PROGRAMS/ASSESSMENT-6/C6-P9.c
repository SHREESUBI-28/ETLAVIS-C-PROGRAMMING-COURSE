#include <stdio.h>
int main()
{
    int num = 10, sum = 0;
    while(num <= 99)
    {
        if(num % 10 == 5) 
        {
            sum = sum + num;
        }
        num++;
    }
    printf("%d", sum);
    return 0;
}
