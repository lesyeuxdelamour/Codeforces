#include <stdio.h>

int max(int a, int b)
{
    return a > b ? a : b;
}

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    switch (max(a, b))
    {
    case 1:
        printf("1/1");
        break;
    case 2:
        printf("5/6");
        break;
    case 3:
        printf("2/3");
        break;
    case 4:
        printf("1/2");
        break;
    case 5:
        printf("1/3");
        break;
    case 6:
        printf("1/6");
        break;
    default:
        printf("0/1");
    }
}