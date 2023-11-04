#include<stdio.h>
#include<string.h>

int DandA(char *str)
{
    int a = 0, d = 0;
    for(int i = 0; i < strlen(str); ++i)
    {
        if(str[i] == 'A')
            a++;
        if(str[i] == 'D')
            d++;
    }
    if(a > d)
        return 1;
    if(a < d)
        return -1;
    if(a == d)
        return 0;
}

int main()
{
    int n;
    scanf("%d", &n);
    char str[n];
    scanf("%s", str);
    if(DandA(str) == 1)
        printf("Anton");
    if(DandA(str) == -1)
        printf("Danik");
    if(DandA(str) == 0)
        printf("Friendship");
    return 0;
}