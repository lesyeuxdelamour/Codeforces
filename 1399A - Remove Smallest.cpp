#include<stdio.h>
#include<stdlib.h>

int t, n;
int arr[101];

int cmp(const void *x, const void *y)
{
	int u = *(int*)x;
	int v = *(int*)y;
	return u - v;
}

int remove(int *arr, int n)
{
	if(arr[0] == arr[n-1])
		return 1;
	for(int i = 1; i < n; ++i)
		if(arr[i] - arr[i-1] == 1 || arr[i] - arr[i-1] == 0)
			arr[i-1] = 0;
		else
			return 0;
	return 1;
}


int main()
{
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d", &n);
		for(int i = 0; i < n; ++i)
			scanf("%d", &arr[i]);
		qsort(arr, n, sizeof(int), cmp);
		if(remove(arr, n))
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
