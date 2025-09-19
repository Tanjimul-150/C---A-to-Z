#include<stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, arr[101], i, j, arr2[101];
        scanf("%d", &n);
        
        for (i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        
        for (i = 0; i < n; i++)
        {
            arr2[i]=(n+1)-arr[i];
        }
        
        for (i = 0; i < n; i++)
        {
            printf("%d ", arr2[i]);
        }
        printf("\n");
        }
   return 0;
}