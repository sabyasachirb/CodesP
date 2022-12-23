#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int unique_arr[n];
    int unique_arr_index = 0;
    for(int i=0; i<n; i++)
    {
        int select = arr[i];
        int found=0;
        for(int j=0; j<n; j++){
            if(unique_arr[j]==select)
            found =1;
        }
        if(found == 0){
            unique_arr[unique_arr_index]=arr[i];
            unique_arr_index++;
        }
    }
    for(int i=0; i<unique_arr_index; i++){
        printf("%d ",unique_arr[i]);
    }

    // printf("%d", arr[n]);
    return 0;
}