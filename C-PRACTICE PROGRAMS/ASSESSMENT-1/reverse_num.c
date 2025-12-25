#include<stdio.h>
int main()
{
    int num,rev;
    scanf("%d",&num);
    rev=(num%10)*10+(num/10);
    printf("%d",rev);
}
