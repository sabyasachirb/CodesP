#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=1; i<a; i++){
        if(i!=1 && i!=a){
            if(a%i==0){
                printf("Composite");
                break;
            }
            else{
                printf("Prime");
                break;
            }
            
        }
    }
    return 0;
}