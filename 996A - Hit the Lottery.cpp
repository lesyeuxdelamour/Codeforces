#include<stdio.h>

int n, res = 0;
int arr[5] = {100, 20, 10, 5, 1};

int main()
{
	scanf("%d", &n);
	for(int i = 0; i < 5; ++i)
	{
		res+=n/arr[i];
		n%=arr[i];
	}
	printf("%d", res);
	return 0;
}
