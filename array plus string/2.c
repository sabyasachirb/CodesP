#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t;
    scanf("%d", &t);
    for(int i=0; i<t; i++){
        int n,cnt=0;
        scanf("%d", &n);
        int arr[n];
        for(int i=0; i<n; i++){
            scanf("%d", &arr[i]);
        }
        for(int i=0; i<n; i++){
            if(arr[i]==sqrt(arr[i])*sqrt(arr[i])){
                cnt++;
            }
        }
        if(cnt>0){
            printf("%d\n",cnt);
        }
        else{
            printf("-1\n");
        }

    }
    return 0;
}
