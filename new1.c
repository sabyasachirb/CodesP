#include<stdio.h>
void is_prime(int x)
{
    int c;
    for(int i=2; i<x; i++)
    {
    if(x%i==0)
    {
    c = 1;
    break;
    }
    else
    c = 0;
    }
    if(c==1)
    printf("Not prime");
    else
    printf("Prime");
}


int main()
{
    int a;
    scanf("%d",&a);
    is_prime;
    return 0;
}