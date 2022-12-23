#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // int reverse[n];
    // for(int i= n-1, j=0; i>=0; i--,j++){
    //     reverse[j]=arr[i];
    // }
    // for(int i=0; i<n; i++){
    //     printf("%d ", reverse[i]);
    // }
    int last, first;
    for (int i = n - 1, j = 0; i >= 0; i--, j++)
    {
        first = arr[j];
        arr[j] = arr[i];
        arr[i] = first;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}