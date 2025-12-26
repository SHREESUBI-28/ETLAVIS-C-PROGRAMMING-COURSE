#include<stdio.h>
int main()
{
    int num=6,sum=0;
    for(int i=num;i>0;i--)
    {
        sum=sum+i;
    }
    printf("%d",sum);
}