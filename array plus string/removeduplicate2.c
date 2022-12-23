#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int max=arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    int lol[max+1];
    for(int i=0; i<=max; i++){
         lol[i]=0;
    }
    for(int i=0; i<n; i++){
        lol[arr[i]]+=1;
    }
    for(int i=0; i<=max; i++){
        if(lol[i]==1 || lol[i]>1){
            printf("%d ",i);
        }
    }




    return 0;
}