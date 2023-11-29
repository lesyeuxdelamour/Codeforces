#include <stdio.h>

void dfs(int *arr, int *visit, int n)
{
    visit[1] = 1;
    for(int i = 2; i < n; ++i)
        visit[i] = 0;
    for (int i = 1; i < n; ++i)
    {
        if (visit[i])
            visit[i + arr[i]] = 1;
    }
}

int main()
{
    int n, idx;
    scanf("%d%d", &n, &idx);
    int arr[n], visit[n];
    for (int i = 1; i < n; ++i)
        scanf("%d", &arr[i]);
    dfs(arr, visit, n);
    printf(visit[idx] ? "YES" : "NO");
    return 0;
}