#include<stdio.h>

int is_prime(int x)
{
    for(int i=2;i<x;i++)
    {
        if(x%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    int n;
    scanf("%d",&n);

    if(is_prime(n)==1)
        printf("Prime Number\n");
    else
        printf("Composite Number\n");
    return 0;
}