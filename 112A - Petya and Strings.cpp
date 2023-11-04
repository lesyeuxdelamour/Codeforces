#include<stdio.h>
#include<string.h>

int main()
{
	char s1[100], s2[100];
	scanf("%s%s", s1, s2);
	printf("%d", strcmp(strlwr(s1), strlwr(s2)));
}
