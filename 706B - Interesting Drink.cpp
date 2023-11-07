#include <stdio.h>
#include <stdlib.h>

int n, q, count;
int shop[100001], cost;

int cmp(const void *a, const void *b)
{
    return *(int *)a - *(int *)b;
}

int upperbound(int *arr, int l, int r, int x)
{
    int mid;
    while (l < r)
    {
        mid = l + (r - l) / 2; // ~ (l + r) / 2 nhưng tránh tràn số nếu l, r quá lớn
        if (x >= arr[mid])
            l = mid + 1;
        else
            r = mid;
    }
    return l;
}

int lowerbound(int *arr, int l, int r, int x)
{
    int mid;
    while (l < r)
    {
        mid = l + (r - l) / 2; // ~ (l + r) / 2 nhưng tránh tràn số nếu l, r quá lớn
        if (x < arr[mid])
            r = mid - 1;
        else
            l = mid;
    }
    return r;
}

int main()
{
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
        scanf("%d", &shop[i]);
    qsort(shop, n, sizeof(int), cmp);
    scanf("%d", &q);
    while (q--)
    {
        count = 0;
        scanf("%d", &cost);
        printf("%d\n", upperbound(shop, 0, n, cost));
        printf("%d\n", lowerbound(shop, 0, n, cost));
    }
    return 0;
}
