#include<stdio.h>
int main()
{
    int num,add;
    scanf("%d",&num);
    num=(num / 100) + ((num / 10) % 10) + (num % 10);
    printf("%d",num);
}
