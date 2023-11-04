#include<stdio.h>

int n, min_id, max_id;
int arr[101];

int main()
{
	scanf("%d", &n);
	for(int i = 0; i < n; ++i)
		scanf("%d", &arr[i]);
		min_id = 0;
		max_id = n-1;
	for(int i = 1; i < n; ++i)
		if(arr[i] <= arr[min_id])
			min_id = i;
	for(int i = n-2; i >= 0; --i)
		if(arr[i] >= arr[max_id])
			max_id = i;
	if(max_id < min_id)
		printf("%d", max_id + n - min_id - 1);
	else
		printf("%d", max_id + n - min_id - 2);
	return 0;
}
