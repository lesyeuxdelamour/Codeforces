#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char host[101], guest[101], letters[101];

int cmp(const void *a, const void *b)
{
	int u = *(char*)a;
	int v = *(char*)b;
	return u - v;
}

int main()
{
	scanf("%s%s%s", guest, host, letters);
	strcat(guest, host);
	qsort(guest, strlen(guest), sizeof(char), cmp);
	qsort(letters, strlen(letters), sizeof(char), cmp);
	if(!strcmp(guest, letters))
		printf("YES");
	else
		printf("NO");
	return 0;
}
