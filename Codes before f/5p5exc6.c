#include<stdio.h>
int main(){
    int n, m;
    scanf("%d %d",&n,&m);
    while(n!=m)
    {
        n=n%24;
        printf("%d  ", n);
        n++;
    }
    printf("%d", n);
    return 0;
}
