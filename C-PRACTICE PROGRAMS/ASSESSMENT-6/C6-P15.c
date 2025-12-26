#include <stdio.h>
#include<math.h>
int main()
{
    int num, temp, first, last, digits = 0, result;
    scanf("%d", &num);
    last = num % 10;  
    temp = num;
    while(temp > 0)
    {
        first = temp;
        temp = temp / 10;
        digits++;
    }
    temp = num % (int)pow(10, digits - 1);
    temp = temp / 10;
    result = last * (int)pow(10, digits - 1)
             + temp * 10
             + first;
    printf("%d", result);
    return 0;
}
