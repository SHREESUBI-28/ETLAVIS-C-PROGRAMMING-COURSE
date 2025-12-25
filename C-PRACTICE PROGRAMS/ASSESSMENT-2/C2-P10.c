#include <stdio.h>
int main() {
    int num,result,ten,one;
    scanf("%d",&num);
    ten=num/10;
    one=num%10;
    result=(ten<one);
    printf("%d",result);
    return 0;
}
