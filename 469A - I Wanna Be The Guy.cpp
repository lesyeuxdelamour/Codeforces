#include<stdio.h>
#include<stdlib.h>
 
int t, n, m, count = 0;
int arr[202];

int cmp(const void *a, const void *b)
{
	int u = *(int*)a;
	int v = *(int*)b;
	return u-v;
}
 
int main()
{
	scanf("%d", &t);
	scanf("%d", &n);
	for(int i = 0; i < n; ++i)
		scanf("%d", &arr[i]);
	scanf("%d", &m);
	for(int i = n; i < m+n; ++i)
		scanf("%d", &arr[i]);
	qsort(arr, m+n, sizeof(int), cmp);
	for(int i = 0; i < m+n; ++i)
		if(arr[i] != arr[i+1])
			count++;
	if(count == t)
		printf("I become the guy.");
	else
		printf("Oh, my keyboard!");
	return 0;
}
