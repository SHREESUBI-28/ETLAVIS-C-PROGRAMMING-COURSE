#include<stdio.h>
int main()
{
    int num=1;
    loop:
    printf("%d\n",num);
    num++;
    if(num<6)
    goto loop;
    }
