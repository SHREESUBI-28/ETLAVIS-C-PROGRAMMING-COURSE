#include <stdio.h>

int main() {
    int num, rev;
    scanf("%d", &num);

    rev = (num % 10) * 100 + ((num / 10) % 10) * 10 + (num / 100);
    printf("%d", rev);

    return 0;
}
