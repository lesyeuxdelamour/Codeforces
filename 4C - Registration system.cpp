#include<stdio.h>
#include<string.h>

int n;
char name[10001][33];
int f[10001];

int main()
{
	scanf("%d", &n);
	for(int i = 0; i < n; ++i)
	{
		scanf("%s", name[i]);
		if(i)
			for(int j = i-1; j >= 0; --j)
				if(strcmp(name[j], name[i]) == 0)
					f[i]++;
	}
	for(int i = 0; i < n; ++i)
		if(f[i])
			printf("%s%d\n", name[i], f[i]);
		else
			printf("OK\n");
	return 0;
}
