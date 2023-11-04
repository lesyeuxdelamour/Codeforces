#include<stdio.h>
#include<stdlib.h>

int n, k, res = 1000;
int puzzle[51];

int cmp(const void *a, const void *b)
{
	int u = *(int*)a;
	int v = *(int*)b;
	return u - v;
}

int min(int a, int b)
{
	if(a < b)
		return a;
	return b;
}

int main()
{
	scanf("%d%d", &k, &n);
	for(int i = 0; i < n; ++i)
		scanf("%d", &puzzle[i]);
	qsort(puzzle, n, sizeof(int), cmp);
	for(int i = n; i >= k; --i)
		res = min(res, puzzle[i-1] - puzzle[i-k]);
	printf("%d", res);
	return 0;
}

