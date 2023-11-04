#include<stdio.h>

int n, k, i = 0, count = 0;

int main()
{
	scanf("%d%d", &n, &k);
	k = (240 - k)/5;
	while(i <= k && count <= n)
	{
		count++;
		i+=count;
	}
	printf("%d", count-1);
	return 0;
}
