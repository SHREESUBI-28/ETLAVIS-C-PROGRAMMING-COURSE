#include <stdio.h>

int main()
{
    int num,count=0;
    scanf("%d",&num);

loop:
    if(num>0)
    {
        num=num/10;
        count++;
        goto loop;
    }
    printf("%d",count);
}
