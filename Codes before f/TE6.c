#include<stdio.h>
int main(){
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    if(a%b==0){
        printf("The first number is divisible by second number.");
    }
    else if(b%a==0){
        printf("The second number is divisible by first number.");
    }
    else{
        printf("They are not divisible by each other");
    }
    return 0;
    // djhfwoagohiehangewigeiwo
}