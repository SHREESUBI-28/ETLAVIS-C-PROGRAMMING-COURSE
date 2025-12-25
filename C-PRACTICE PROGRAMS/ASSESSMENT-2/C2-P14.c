#include <stdio.h>
int main() {
    int num,result,ten,one,hun,thou;
    scanf("%d",&num);
    result=(num/100)==(num%100);
    printf("%d",result);
    return 0;
}
