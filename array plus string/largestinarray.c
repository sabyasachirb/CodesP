#include<stdio.h>
int main()
{
    int n,i,count=0;
    scanf("%d", &n);
    int arr[n];
    for( i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    // printf("%d", arr[n+10]);
    int large=arr[0];
    for(i=0; i<n; i++)
    {
        if(arr[i]>large)
        {
        large = arr[i];
        }
    }
    int narr[large+1];
    for(i=0; i<=large; i++)
    {
        narr[i]=0;
    }
    for(i=0; i<n; i++)
    {
        narr[arr[i]]+=1;
    }
    // for(i=large; i>=1; i--)
    // {
    //     if(narr[i]==1)
    //     {
    //         count++;
    //     }
    //     if(count==2)
    //     {
    //         printf("%d",i);
    //         break;
    //      }
    // }



    // int unique=0, duplicate=0;
    // for(i=0; i<=large;i++)
    // {
    //     if(narr[i]==1)
    //     unique++;
    //     else if (narr[i]>1)
    //     {
    //         duplicate++;
    //     }
    // }
    // printf("Unique %d\n Duplicate %d",unique,duplicate);


     for(i=large; i>=1; i--)
    {
        if(narr[i]==1 || narr[i]>1)
            printf("%d ",i);
         }
         return 0;
    }
    
