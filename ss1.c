#include<stdio.h>
int main(){
    char name[100];
    fgets(name, sizeof(name),stdin);
    for(int i=0; name[i]!='\0';i++){
        if(name[i]>='A' && name[i<='Z']){
            name[i]+=32;
        } 
    }
    puts(name);
    return 0;
}
