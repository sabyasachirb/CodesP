#include<stdio.h>

int arraysum(int array[], int x)
{
    int sum =0;
    for(int i=0; i<x; i++)
    {
        sum += array[i];
    }
    return sum;
}

int main()
{
    int arr[] ={1,5,8,99,3};
    int n = 5;
    int sum = arraysum(arr, n);
    printf("%d",sum);
    return 0;
}