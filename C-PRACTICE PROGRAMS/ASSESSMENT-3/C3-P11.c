#include <stdio.h>
int main() {
    int num;
    scanf("%d",&num);
    if((num/10)<=(num%10))
    {
        printf("Success");
    }
    else
    {
        printf("Failure");
    }
}
