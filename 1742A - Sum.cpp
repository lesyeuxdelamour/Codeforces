#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b)
{
    int u = *(int *)a;
    int v = *(int *)b;
    return u - v;
}


int main()
{
	int t;
	scanf("%d", &t);
	while (t--)
	{
		int arr[3];
		for (int i = 0; i < 3; ++i)
			scanf("%d", &arr[i]);
		qsort(arr, 3, sizeof(int), cmp);
		printf(arr[2] == arr[0] + arr[1] ? "YES\n" : "NO\n");
	}
	return 0;
}
