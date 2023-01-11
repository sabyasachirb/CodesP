#include<stdio.h>

int first_last(int n, int aray[n])
{
    int first = aray[0]/1000;
    int last = aray[n-1]%10;
    int sum[2];
    int sum[0]=first;
    int sum[1]=last;
    int sum[2]=sum[0]+sum[2];
    return sum;
}

int main()
{
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0; i<a; i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum = first_last(a, arr);
    printf("Sum = %d",sum);
    return 0;
}

