#include<stdio.h>
int main(){
    int a,b,c,d;
    scanf("%d %d %d %d", &a,&b,&c,&d);
    if(a>b && a>c && a>d){
        printf("Largest = %d\n", a);
    }
    if(b>a && b>c && b>d){
        printf("Largest = %d\n", b);
    }
    if(c>b && c>a && c>d){
        printf("Largest = %d\n", c);
    }
    if(d>c && d>b && d>a){
        printf("Largest = %d\n", d);
    }
    if(a<b && a<c && a<d){
        printf("Smallest = %d\n", a);
    }
    if(b<a && b<c && b<d){
        printf("Smallest = %d\n", b);
    }
    if(c<b && c<a && c<d){
        printf("Smallest = %d\n", c);
    }
    if(d<c && d<b && d<a){
        printf("Smallest = %d\n", d);
    }
    return 0;

}