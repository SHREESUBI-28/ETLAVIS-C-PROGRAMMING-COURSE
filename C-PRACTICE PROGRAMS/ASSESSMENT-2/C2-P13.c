#include <stdio.h>
int main() {
    int num,result,ten,one,hun;
    scanf("%d",&num);
    hun=num/10;
    ten=num/10%10;
    one=num%10;
    result=(one==ten);
    printf("%d",result);
    return 0;
}

