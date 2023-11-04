#include<stdio.h>
#include<string.h>

int nearlucky(char *num)
{
    int count = 0;
    for(int i = 0; i < strlen(num); ++i)
        if(num[i] == '4' || num[i] == '7')
            count++;
    if(count == 4 || count == 7)
        return 1;
    return 0;
}

int main()
{
    char num[20];
    scanf("%s", num);
    if(nearlucky(num))
        printf("YES");
    else
        printf("NO");
    return 0;
}