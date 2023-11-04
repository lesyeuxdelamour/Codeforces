#include<stdio.h>
#include<stdlib.h>

int n;
int gift[101], fr[101];

int cmp(const void *a, const void *b)
{
	int u = *(int*)a;
	int v = *(int*)b;
	return gift[u] - gift[v];
}

int main()
{
	scanf("%d", &n);
	for(int i = 0; i < n; ++i)
	{
		scanf("%d", &gift[i]);
		fr[i] = i;
	}
	qsort(fr, n, sizeof(int), cmp);
	for(int i = 0; i < n; ++i)
		printf("%d ", fr[i]+1);
	return 0;
}
