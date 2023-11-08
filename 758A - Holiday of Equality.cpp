#include <stdio.h>

int n;
int arr[101];

int main()
{
    scanf("%d", &n);
    int max = 0, sum = 0;
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &arr[i]);
        if (arr[i] > max)
            max = arr[i];
    }
    for (int i = 0; i < n; ++i)
        sum += max - arr[i];
    printf("%d", sum);
    return 0;
}