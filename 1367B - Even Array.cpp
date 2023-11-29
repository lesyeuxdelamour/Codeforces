#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        int even = 0, odd = 0;
        for (int i = 0; i < n; ++i)
        {
            scanf("%d", &arr[i]);
            if (i % 2 && arr[i] % 2 == 0)
                odd++;
            if (i % 2 == 0 && arr[i] % 2)
                even++;
        }
        printf("%d\n", odd == even ? (odd + even) / 2 : -1);
    }
    return 0;
}