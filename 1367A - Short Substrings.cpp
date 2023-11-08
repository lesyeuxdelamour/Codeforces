#include <stdio.h>
#include <string.h>

char str[101];

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%s", str);
        int len = strlen(str);
        for (int i = 1; i < len - 1; ++i)
        {
            if (str[i] == str[i + 1])
                str[i + 1] = 0;
        }
        for (int i = 0; i < len; ++i)
            if (str[i])
                printf("%c", str[i]);
        printf("\n");
    }
    return 0;
}