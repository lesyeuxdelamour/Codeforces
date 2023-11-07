#include <stdio.h>
#include <string.h>

int main()
{
	char borze[201];
	scanf("%s", borze);
	for (int i = 0; i < strlen(borze); ++i)
	{
		int bit = 0;
		if (borze[i] == '.')
			bit = 0;
		if (borze[i] == '-' && borze[i + 1] == '.')
		{
			bit += 1;
			i++;
		}
		if (borze[i] == '-' && borze[i + 1] == '-')
		{
			bit += 2;
			i++;
		}
		printf("%d", bit);
	}
	return 0;
}
