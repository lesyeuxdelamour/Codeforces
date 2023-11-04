#include<stdio.h>
#include<string.h>

int main()
{
	char word[101], trans[101];
	scanf("%s%s", word, trans);
	if(strcmp(strrev(word), trans) == 0)
		printf("YES");
	else
		printf("NO");
	return 0;
}
