#include<stdio.h>
#include<math.h>
int is_seven_present(int n);
int digit_sum(int n);
int last_dig_prime(int n);
int main()
{
    int a;
    scanf("%d", &a);
    if(is_seven_present(a) == 1 && digit_sum(a)>10 && last_dig_prime(a) == 1)
    {
        printf("Sabyasachi's Number\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}
int is_seven_present(int n)
{
    while(n>0)
    {
        if(n%10 == 7)
            return 1;
        n = n/10;
    }
    
}
int digit_sum(int n)
{
    int ans =0;
    while(n>0)
    {
    ans += (n%10);
    n = n/10;
    }
    return ans;
}
int last_dig_prime(int n)
{
    int ld = n%10;
    if(ld == 2 || ld==3 || ld==5 || ld==7)
        return 1;
    else
        return 0;
}