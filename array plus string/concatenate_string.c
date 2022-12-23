#include<stdio.h>
#include<string.h>
int main(){
    char s1[1000]={"Phi"}; 
    char s2[1000]= {"tron"};
    int i=0,j=0;
    
    int l=strlen(s1)-1;
    
    while (s2[j]!='\0')
    {
        s1[l+j]=s2[j];
        j++;
    }
    printf("%s",s1);
    return 0;
    
}