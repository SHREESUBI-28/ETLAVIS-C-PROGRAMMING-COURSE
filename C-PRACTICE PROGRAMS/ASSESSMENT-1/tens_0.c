#include<stdio.h>
int main()
{
    int num,ten,temp,hun;
    scanf("%d",&num);
    ten=(num%10);
    hun=num/100;
    temp=0;
    printf("%d%d%d",hun,temp,ten);
}
