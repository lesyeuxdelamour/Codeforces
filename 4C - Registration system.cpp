#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct user
{
	char name[33];
	int fre, id;
};

int cmpname(const void *a, const void *b)
{
	struct user u = *(struct user *)a;
	struct user v = *(struct user *)b;
	if(strcmp(u.name, v.name) == 0)
		return u.id - v.id;
	return strcmp(u.name, v.name);
}

int cmppos(const void *a, const void *b)
{
	struct user u = *(struct user *)a;
	struct user v = *(struct user *)b;
	return u.id - v.id;
}

int main()
{
	int n;
	scanf("%d\n", &n);
	struct user mail[n];
	for (int i = 0; i < n; ++i)
	{
		scanf("%s", mail[i].name);
		mail[i].id = i;
		mail[i].fre = 1;
	}
	qsort(mail, n, sizeof(struct user), cmpname);
	for (int i = 1; i < n; ++i)
		if (strcmp(mail[i].name, mail[i - 1].name) == 0)
			mail[i].fre += mail[i - 1].fre;
	qsort(mail, n, sizeof(struct user), cmppos);
	for (int i = 0; i < n; ++i)
		printf(mail[i].fre == 1 ? "OK\n" : "%s%d\n", mail[i].name, mail[i].fre - 1);
	return 0;
}
