#include <stdio.h>

int alphabet[26] = {0};

void sieve()
{
    char str[11] = "codeforces";
    for (int i = 0; i < 10; ++i)
        alphabet[str[i] - 'a'] = 1;
}

int main()
{
    sieve();
    int t;
    scanf("%d\n", &t);
    while (t--)
    {
        char c;
        scanf("%c", &c);
        printf(alphabet[c - 'a'] ? "YES\n" : "NO\n");
        getchar();
    }
    return 0;
}