#include<stdio.h>

int main()
{
    int sorted_arr[8];
    int arr[8]= {12,7,9,3,15,2,6,5};
    

    for(int j=0; j<8; j++)
    {
    int min=arr[0];
    int m_ind = 0;
    for(int i=0;i<8;i++){
        if(arr[i]<min){
            min = arr[i];
            m_ind=i;
        }
    }
    sorted_arr[j]=min;
    arr[m_ind]=9999;

    for(int i=0;i<8;i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    
}
for(int i=0;i<8;i++){
        printf("%d ", sorted_arr[i]);
    }
return 0;
}