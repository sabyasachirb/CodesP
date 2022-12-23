#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=1; i<=N; i++){
        scanf("%d",&arr[i]);
    }
    for(int j=N; j>=1; j--){
        printf("%d ", arr[j]);
    }
    return 0;
}