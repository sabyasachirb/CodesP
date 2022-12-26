#include <stdio.h>
#include <string.h>

// aaabbc 

// a-> arr[0] = 1
// a-> arr[0] = 2
// a-> arr[0] = 3
// b-> arr[1] = 1
// b-> arr[1] = 2
// c-> arr[2] = 1

// arr[0] = 3
// arr[1] = 2
// arr[2] = 1

int main()
{
    int arr[200] = {0};
    char str[100];
    scanf("%s", str);
    int size = strlen(str); 

    for(int i=0 ;i<size; i++){
        arr[str[i] - 97] += 1;
    }

    for(int i=0; i<26; i++){
        int max=0, index=0;
        
        // arr moddhe boro man ber korbo
        for(int j=0; j<26; j++){
            if(arr[j] > max){
                max = arr[j];
                index = j;
            }
        }

        //printf("Array: %d and Index: %d char: %c\n",max, index, index+97);
        for(int k=1; k<=max; k++){
            char ch = index+97;
            printf("%c",ch);
        }
        //printf("\n");
        // maximum ke vanish kore dibo
        arr[index] = 0;

    }
    

    return 0;
}