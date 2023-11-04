#include<stdio.h>

int k, r, shovels = 1;

int main()
{
	scanf("%d%d", &k, &r);
	while((k * shovels - r) % 10 != 0 && k * shovels % 10 != 0)
        shovels++;
	printf("%d", shovels);
	return 0;
}
