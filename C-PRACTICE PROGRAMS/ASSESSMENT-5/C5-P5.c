#include<stdio.h>
int main()
{
    int start=1,end=9;
    for(int i=start;i<=end;i++)
    {
        if(i%2!=0)
        {
            printf("%d\n",i);
        }
    }
}