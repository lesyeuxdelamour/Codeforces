#include<stdio.h>
 
void input(int *arr, int n)
{
	for(int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
}
 
void solve()
{
	int n, k, arr[100], count = 0;
	scanf("%d%d", &n, &k);
	input(arr, n);
	for(int i = 0; i < n; i++)
		if(arr[i] >= arr[k-1] && arr[i] > 0)
			count++;
	printf("%d", count);
}
 
int main()
{
	solve();
	return 0;
}
