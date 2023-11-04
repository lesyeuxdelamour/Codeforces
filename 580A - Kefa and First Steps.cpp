#include<stdio.h>

int n, length = 1, count = 1;
int arr[100001];

int max(int a, int b)
{
	if(a > b)
		return a;
	return b;
}

int main()
{
	scanf("%d", &n);
	scanf("%d", &arr[0]);
	for(int i = 1; i < n; ++i)
	{
		scanf("%d", &arr[i]);
		if(arr[i] >= arr[i-1])
		{
			count++;
			length = max(length, count);
		}
		else
			count = 1;
	}
	printf("%d", length);
	return 0;
}

