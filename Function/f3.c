#include<stdio.h>

int fact(int a)
{
    int ans=1;
    for(int i=1; i<=a; i++)
    {
        ans *= i; 
    }
    return ans;
}

int main()
{
    int n,r;
    scanf("%d%d", &n, &r);
    int perm = fact(n)/ fact(n-r);
    printf("nPr %d\n", perm);
    int comb = fact(n)/ (fact(n-r)*fact(r));
    printf("nCr %d\n", comb);
    return 0;
}