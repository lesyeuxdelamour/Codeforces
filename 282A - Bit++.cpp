#include<stdio.h>
#include<string.h>

int opr(int n, char *ope)
{
	if(strcmp("X++", ope) == 0 || strcmp("++X", ope) == 0 || strcmp("+X+", ope) == 0)
		return 1;
	if(strcmp("X--", ope) == 0 || strcmp("--X", ope) == 0 || strcmp("-X-", ope) == 0)
		return -1;
	return 0;
}

int main()
{
	int t, n = 0;
	scanf("%d", &t);
	while(t--)
	{
		char ope[4];
		scanf("%s", ope);
		n+=opr(n, ope);
	}
	printf("%d", n);
	
}
