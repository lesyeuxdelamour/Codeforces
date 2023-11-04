#include<stdio.h>
#include<stdlib.h>

int s, n;
int dragon[1001][2], x[1001];

int cmp(const void *a, const void *b)
{
	int u = *(int*)a;
	int v = *(int*)b;
	return dragon[u][0] - dragon[v][0];
}

int main()
{
	scanf("%d%d", &s, &n);
	for(int i = 0; i < n; ++i)
	{
		scanf("%d%d", &dragon[i][0], &dragon[i][1]);
	}
	for(int i = 0; i < n; ++i)
		x[i] = i;
	qsort(x, n, sizeof(int), cmp);
	for(int i = 0; i < n; ++i)
	{
		if(s > dragon[x[i]][0])
			s+=dragon[x[i]][1];
		else
		{
			printf("NO");
			return 0;
		}
	}
	printf("YES");
	return 0;
}
