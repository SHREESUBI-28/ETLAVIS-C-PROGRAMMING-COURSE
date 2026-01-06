#include <stdio.h>
void memcopy(int *src, int *dst, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        *(dst + i) = *(src + i);
    }
}
int main()
{
    int src[5] = {10, 20, 30, 40, 50};
    int dst[5];
    int size = 5;
    memcopy(src, dst, size);
    printf("Destination array:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", *(dst + i));
    }
}
