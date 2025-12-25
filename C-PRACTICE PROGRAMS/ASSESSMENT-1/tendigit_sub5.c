#include <stdio.h>

int main() {
    int num, result;
    scanf("%d", &num);

    result = num - (num % 2) * 5;
    printf("%d", result);

    return 0;
}
