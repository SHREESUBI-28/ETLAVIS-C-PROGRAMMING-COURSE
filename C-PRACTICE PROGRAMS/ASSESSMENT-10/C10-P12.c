#include <stdio.h>
int main()
{
    int arr[50];
    char str[51];
    int n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        str[i] = arr[i] + '0';  
    }
    str[i] = '\0';
    printf("%s", str);
}
