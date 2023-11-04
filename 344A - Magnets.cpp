#include<stdio.h>
#define size 100000

int n, arr[size], group = 1;

void input(int *arr, int n)
{
	for(int i = 0; i < n; ++i)
		scanf("%d", &arr[i]);
}

int magnet(int x)
{
	if(x == 10)
		return 1;
	if(x == 01)
		return -1;
}

int main()
{
	scanf("%d", &n);
	input(arr, n);
	for(int i = 0; i < n; ++i)
		if(magnet(arr[i]) + magnet(arr[i+1]) == 0)
			group++;
	printf("%d", group);
	return 0;
}
