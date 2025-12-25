#include <stdio.h>

int main() {
    int num, result;
    scanf("%d", &num);

    result = num - ((num/10 %10) % 2) * 5;
    printf("%d", result);

    return 0;
}
