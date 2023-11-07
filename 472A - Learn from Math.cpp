#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n % 2)
        printf("%d %d", 9, n - 9);
    else
        printf("%d %d", 8, n - 8);
    return 0;
}