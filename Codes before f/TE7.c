#include<stdio.h>
int main(){
    int a, b,c;
    scanf("%d %d",&a, &b);
    for(int i=1; i<=a && i<=b; i++)
    {
        if(a%i==0 && b%i==0)
            c = i;
    }
printf("The GCD of %d and %d is %d", a, b, c);
return 0;
}