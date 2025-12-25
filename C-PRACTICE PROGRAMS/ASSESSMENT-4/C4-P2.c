#include<stdio.h>
int main()
{
    int num=5;
    loop:
    printf("%d\n",num);
    num--;
    if(num>=1)
    goto loop;
    }
