#include<stdio.h>
int main()
{
    int start=11,end=20;
    for(int i=start;i<=end;i++)
    {
        if(i%2!=0)
        {
            printf("%d\n",i);
        }
    }
}