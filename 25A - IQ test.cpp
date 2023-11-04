#include<stdio.h>

int n, odd = 0, even = 0;
int arr[101];

int main()
{
	scanf("%d", &n);
	for(int i = 0; i < n; ++i)
	{
		scanf("%d", &arr[i]);
		if(arr[i]%2) 
			odd++;
		else 
			even++;
	}
	for(int i = 0; i < n; ++i)
		if(odd == 1 && arr[i]%2)
			printf("%d", i+1);
		else if(even == 1 && arr[i]%2 == 0)
			printf("%d", i+1);
	return 0;
}
