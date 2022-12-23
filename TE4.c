#include<stdio.h>
int main(){
    long long int n,d,c, sum=0;
    scanf("%lld", &n);
    do
    {
    d=n%10;
    n/=10;
    sum =sum + d;
     } while (n!=0);
    
    printf("%d",sum);
    return 0;
}