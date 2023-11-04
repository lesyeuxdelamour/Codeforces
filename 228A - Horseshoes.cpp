#include<stdio.h>

int arr[4], count = 0;

void input(int *arr)
{
	for(int i = 0; i < 4; ++i)
		scanf("%d", &arr[i]);
}

int main()
{
	input(arr);
	for(int i = 0; i < 4; ++i)
	{
		for(int j = i+1; j < 4; ++j)
			if(arr[i] == arr[j] && arr[i] != 0)
			{
				arr[j] = 0;
			}
		if(arr[i] != 0)
			count++;
	}
	printf("%d", 4-count);
}
