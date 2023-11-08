#include <stdio.h>
#include <stdlib.h>

int n;
int child[5001], pro[5001], math[5001], PE[5001], count[3];

int minEle(int *arr, int n)
{
    int min = 1e4;
    for (int i = 0; i < n; ++i)
        if (arr[i] < min)
            min = arr[i];
    return min;
}

int main()
{
    scanf("%d", &n);
    int a = 0, b = 0, c = 0;
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &child[i]);
        switch (child[i])
        {
        case 1:
            pro[count[0]++] = i + 1;
            break;
        case 2:
            math[count[1]++] = i + 1;
            break;
        case 3:
            PE[count[2]++] = i + 1;
            break;
        }
    }
    int min = minEle(count, 3);
    printf("%d\n", min);
    for (int i = 0; i < min; ++i)
        printf("%d %d %d\n", pro[i], math[i], PE[i]);
    return 0;
}
