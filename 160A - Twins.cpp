#include<stdio.h>
#include<stdlib.h>

int n, k = 0, sum = 0, sumArray = 0;
int arr[101];

int cmp(void const *a, void const *b)
{
	int u = *(int*)a;
	int v = *(int*)b;
	return v - u;
}

int main()
{
	scanf("%d", &n);
	for(int i = 0; i < n; ++i)
	{
		scanf("%d", arr+i);
		sumArray+=arr[i];
	}
	qsort(arr, n, sizeof(int), cmp);
	while(sum <= sumArray-sum)
	{
		sum+=arr[k];
		k++;
	}
	printf("%d", k);
}
