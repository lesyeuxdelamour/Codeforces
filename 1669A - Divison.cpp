#include <stdio.h>

int division(int n)
{
    if (n < 1400)
        return 4;
    if (n < 1600)
        return 3;
    if (n < 1900)
        return 2;
    return 1;
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d", &n);
        printf("Division %d\n", division(n));
    }
}