#include <stdio.h>

int main() {
    int num, result,sum;
    scanf("%d", &num);
    sum=(num/10)%10+num%10;
    result = num - (sum % 2) * 5;
    printf("%d", result);

    return 0;
}
