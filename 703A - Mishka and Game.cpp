#include <stdio.h>

int a[101], b[101];

int main()
{
	int n, m = 0, c = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; ++i)
	{
		scanf("%d%d", &a[i], &b[i]);
		if (a[i] > b[i])
			m++;
		if (a[i] < b[i])
			c++;
	}
	if (m > c)
		printf("Mishka");
	if (m < c)
		printf("Chris");
	if (m == c)
		printf("Friendship is magic!^^");
	return 0;
}
