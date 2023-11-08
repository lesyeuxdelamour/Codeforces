#include <stdio.h>

int max(int a, int b)
{
	return a > b ? a : b;
}

int main()
{
	int n, a, b, c;
	scanf("%d%d%d%d", &n, &a, &b, &c);
	int count = 0;
	int i, j, k, rem, ans = 0;
	for (i = 0; i * a <= n; ++i)
		for (j = 0; i * a + j * b <= n; ++j)
		{
			rem = n - (a * i + b * j);
			if (rem % c == 0)
			{
				k = rem / c;
				ans = max(ans, i + j + k);
			}
		}
	printf("%d", ans);
	return 0;
}
