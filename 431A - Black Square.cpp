#include <stdio.h>
#include <string.h>

int main()
{
    int arr[4];
    for (int i = 0; i < 4; ++i)
        scanf("%d", &arr[i]);
    char str[100001];
    scanf("%s", str);
    int cal = 0;
    for (int i = 0; i < strlen(str); ++i)
        cal += arr[str[i] - 1 - '0'];
    printf("%d", cal);
}