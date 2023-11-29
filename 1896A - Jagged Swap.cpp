#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        for(int i = 0; i < n; ++i)
            scanf("%d", &arr[i]);
        printf(arr[0] == 1 ? "YES\n" : "NO\n");
    }
    return 0;
}