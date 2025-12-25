#include<stdio.h>
int main()
{
    int num,rev,ten,one;
    scanf("%d",&num);
   rev = ((num / 100) % 10) * 1000 + (num / 1000) * 100 + (num % 100);
   printf("%d",rev);
}
