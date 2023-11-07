#include<stdio.h>

int main()
{
	int n, k, count = 0;
	scanf("%d%d", &n, &k);
	k = 5 - k;
	int arr[n];
	for(int i = 0; i < n; ++i)
	{
		scanf("%d", &arr[i]);
		if(arr[i] <= k)
			count++;
	}
	printf("%d", count/3);
	return 0;
}
