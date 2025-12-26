#include <stdio.h>

int main()
{
    int i;
    for(i = 9999; i >= 1000; i--)
    {
        if(i % 7 == 0 && i % 9 == 0)
        {
            printf("%d", i);
            break;
        }
    }
    return 0;
}
