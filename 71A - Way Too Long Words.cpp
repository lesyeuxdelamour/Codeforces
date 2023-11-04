#include<stdio.h>
#include<string.h>
 
void solve()
{
    char str[100];
    scanf("%s", str);
    int n = strlen(str);
    if(n <= 10)
    	printf("%s\n", str);
    else
    	printf("%c%d%c\n", str[0], n-2, str[n-1]);
}
 
int main()
{
	int t;
		scanf("%d", &t);
	while(t--)
		solve();
	return 0;
}
