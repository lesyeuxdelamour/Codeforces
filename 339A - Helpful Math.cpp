#include<stdio.h>
#include<string.h>

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void intersort(int *arr, int n)
{
	for(int i = 0; i < n-1; i++)
		for(int j = i+1; j < n; j++)
			if(arr[i] > arr[j])
				swap(&arr[i], &arr[j]);
}

int main()
{
	char sum[101];
	scanf("%s", sum);
	int num[101], count = 0;
	for(int i = 0; i < strlen(sum); ++i)
		if(sum[i] != '+')
			num[count++] = sum[i] - '0';
	intersort(num, count);
	int res = 0;
	for(int i = 0; i < strlen(sum); ++i)
		if(sum[i] != '+')
			printf("%d", num[res++]);
		else
			printf("+");
	return 0;
}
