#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int is_prime =1;
    for(int i=2; i<n; i++)
    {
        if(n%i==0)
        {
            is_prime =0;
        }
    }

    if(is_prime == 1)
        printf("Prime Number\n");
    else
        printf("Composite Number\n");

    return 0;
}