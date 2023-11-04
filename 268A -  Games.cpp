#include<stdio.h>

int n, count = 0;
int arr[101][2];

int main()
{
	scanf("%d", &n);
	for(int i = 0; i < n; ++i)
		for(int j = 0; j < 2; ++j)
			scanf("%d", &arr[i][j]);
	for(int i = 0; i < n-1; ++i)
		for(int j = i+1; j < n; ++j)
		{
			if(arr[i][0] == arr[j][1])
				count++;
			if(arr[i][1] == arr[j][0])
				count++;
		}
	printf("%d", count);
	return 0;		
}
