// #include <stdio.h>

// int main(void) {
//   int n;

//   printf("Enter a number: ");
//   scanf("%d", &n);

//   if (n >= 0) {
//     // n is positive, print n to -n
//     for (int i = n; i >= -n; i--) {
//       printf("%d ", i);
//     }
//   } else {
//     // n is negative, print -n to n
//     for (int i = -n; i <= n; i++) {
//       printf("%d ", i);
//     }
//   }

//   return 0;
// }

// #include <stdio.h>

// int main() {
//     int n;

  
//     printf("Enter a value for n: ");
//     scanf("%d", &n);

    
    // if (n > 0) {
    //     for (int i = n; i >= -n; i--) {
    //         printf("%d ", i);
    //     }
    // } 
    // else {
    //     for (int i = n; i <= -n; i++) {
    //         printf("%d ", i);
    //     }
    // }

//     return 0;
// }



#include<stdio.h>

void printso(int x)
{
    if (x > 0) 
    {
        for (int i = x; i >= -x; i--) 
        {
            printf("%d ", i);
        }
    } 
        else {
            for (int i = x; i <= -x; i++) {
                printf("%d ", i);
            }
        }
}

int main()
{
    int n;
    scanf("%d",&n);
    printso(n);
    return 0;
}
