#include <stdio.h>
int memcomp(int *src, int *dst, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (*(src + i) != *(dst + i))
            return 0;   
    }
    return 1;          
}
int main()
{
    int a[] = {10, 20, 30, 40};
    int b[] = {10, 20, 30, 40};
    int size = 4;
    if (memcomp(a, b, size))
        printf("Success");
    else
        printf("Failure");
}
