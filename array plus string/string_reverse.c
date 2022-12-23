#include<stdio.h>
#include<string.h>
int main(){
    char ss[100];
    scanf("%s",ss);
    int i=0, L=0;
    while(ss[i]!='\0'){
        i++;
        L++;
    }
    i=0;
    for(int i=L; i>=0; i--){
        printf("%c" , ss[i]);
    }
    return 0;
}