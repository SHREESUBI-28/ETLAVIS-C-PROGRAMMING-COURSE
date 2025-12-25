#include <stdio.h>
int main() {
    int num;
    scanf("%d",&num);
    if((num/100)==(num%100))
    {
        printf("Success");
    }
    else
    {
        printf("Failure");
    }
}
