#include <stdio.h>

int main(void) {
  int a = 10;
  int b = 20;

  int max = (a > b) ? a : b;

  printf("The maximum of %d and %d is %d\n", a, b, max);

  return 0;
}



// The maximum of 5 and 10 is 10
