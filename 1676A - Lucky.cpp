#include <stdio.h>

int check(char *num)
{
    int a = num[0] + num[1] + num[2];
    int b = num[3] + num[4] + num[5];
    return a == b;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char num[7];
        scanf("%s", num);
        printf(check(num) ? "YES\n" : "NO\n");
    }
    return 0;
}
/*

*/
