#include <stdio.h>
int main()
{
    int num, last, result;
    scanf("%d", &num);
    last = num % 10;
    if(last % 2 == 0)
    {
        result = num;
    }
    else
    {
        result = num - 1;
    }
    printf("%d", result);
    return 0;
}
