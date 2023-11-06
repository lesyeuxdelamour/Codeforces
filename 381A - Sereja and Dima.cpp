#include<stdio.h>

int main()
{
    int n, ser = 0, dim = 0;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; ++i)
        scanf("%d", &arr[i]);
    int l = 0, r = n-1;
    for(int i = 0; i < n; ++i)
    {
        if(i%2)
        {
            dim += (arr[l] > arr[r]) ? arr[l] : arr[r];
            (arr[l] > arr[r]) ? ++l : --r;
        }
        else
        {
            ser += (arr[l] > arr[r]) ? arr[l] : arr[r];
            (arr[l] > arr[r]) ? ++l : --r;
        }
    }
    printf("%d %d", ser, dim);
    return 0;
}