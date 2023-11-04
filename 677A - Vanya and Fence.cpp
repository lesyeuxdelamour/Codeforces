#include<stdio.h>

int solve(int *arr, int n, int h)
{
	int road = 0;
	for(int i = 0; i < n; ++i)
	{
		scanf("%d", &arr[i]);
		if(arr[i] > h)
			road+=2;
		else
			road++;
	}
	return road;		
}

int main()
{
	int n, h;
	scanf("%d%d", &n, &h);
	int arr[n];
	printf("%d", solve(arr, n, h));
	return 0;
}
