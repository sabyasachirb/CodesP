#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d", &a, &b);
    if(a>b){
        c=a;
    }
    else{
        c=b;
    }
    while (1) {
        if ((c%a==0) && (c%b==0)){
            printf("The LCM of %d and %d is %d.", a,b,c);
            break;
        }
        ++c;
    }
    return 0;
}