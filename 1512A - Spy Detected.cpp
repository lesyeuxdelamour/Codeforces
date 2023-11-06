#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n = 0;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; ++i)
            scanf("%d", &arr[i]);
        int flag = 1;
        for (int i = 1; i < n - 1; ++i)
            if (arr[i] != arr[i - 1] && arr[i] != arr[i + 1])
            {
                printf("%d\n", i + 1);
                flag = 0;
            }
        if (flag)
        	printf("%d\n", arr[0] != arr[1] ? 1 : n);
    }
    return 0;
}