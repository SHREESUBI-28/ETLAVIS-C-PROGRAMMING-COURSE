#include<stdio.h>
int main()
{
    int num,rev,thousand,hundered;
    scanf("%d",&num);
    rev=(num%10)*10+(num/10%10);
    hundered=(num/100);
    printf("%d%d",hundered,rev);
}
