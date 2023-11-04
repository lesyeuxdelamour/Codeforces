#include<stdio.h>

void input(int arr[][3], int n)
{
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < 3; ++j)
            scanf("%d", &arr[i][j]);
}

void force(int arr[][3], int n, int *obj)
{
    for(int j = 0; j < 3; ++j)
        for(int i = 0; i < n; ++i)
            obj[j] += arr[i][j];
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n][3], obj[3] = {0}, equilibrium = 1;
    input(arr, n);
    force(arr, n, obj);
    for(int i = 0; i < 3; ++i)
        if(obj[i] != 0)
            equilibrium = 0;
    if(equilibrium)
        printf("YES");
    else
        printf("NO");
    return 0;
}