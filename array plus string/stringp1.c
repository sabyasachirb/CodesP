#include<stdio.h>
#include<string.h>
int main(){
    char str[]="bbbbaccddd";
    int n = strlen(str), largestElement = 26;
    int freq[largestElement+1];
    for(int i=0; i<=largestElement;i++){
        freq[i]=0;
    }
    for(int i=0; i<n; i++){
        freq[(str[i]-'a')+1]+=1;
    }
    int total =0;
    for(int i=1; i<=26; i++){
        if(freq[i]>=1){
            total++;
        }
    }
    int nxt=0;
    while(nxt!=total)
    {
        int max=-1, index = -1;
        char ch;
        for(int i=1; i<=26; i++){
            if(freq[i]>max){
                max=freq[i];
                ch=i+96;
                index=i;
            }
        }
        printf("Next greatest value - %d\n", max);
        printf("Character - %c \n \n",ch);

        for(int i=1; i<=max; i++){
            printf("%c\n\n",ch);
        }
        freq[index]=0;
        nxt++;
    }


    return 0;
}