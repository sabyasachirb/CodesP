#include<stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    int arr[N];
    int counter=0;
    for(int i=0; i<N; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<N; i++){
        if(arr[i]!=arr[i+1])
        counter++;
    }
    if(counter>=1){
        printf("No");
    }
    else{
        printf("Yes");
    }
    return 0;
}