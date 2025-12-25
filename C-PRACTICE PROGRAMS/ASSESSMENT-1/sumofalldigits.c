#include <stdio.h>

int main() {
    int num,sum,add,add2;
    scanf("%d",&num);
    sum=(num/100)+(num/10%10)+(num%10);//19
    if(sum<10)
    {
        printf("%d",sum);
    }
    else
    {
        if(sum>10 )
        {
            add=(sum/10)+(sum%10);
            printf("%d",add);//10
            if(add>=10)
            {
                add2=(add/10)+(add%10);
                printf("%d\n",add2);
            }
        }
    }
}
