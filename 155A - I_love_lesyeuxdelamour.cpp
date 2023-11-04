#include<stdio.h>

int n, max_id = 0, min_id = 0, count = 0;
int point[1001];

int main()
{
	scanf("%d", &n);
	for(int i = 0; i < n; ++i)
	{
		scanf("%d", &point[i]);
		if(point[i] > point[max_id])
		{
			max_id = i;
			count++;
		}
		if(point[i] < point[min_id])
		{
			min_id = i;
			count++;
		}
	}
	printf("%d", count);
	return 0;
}
