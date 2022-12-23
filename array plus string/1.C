#include <stdio.h>

int main() {
  int n;
  printf("Enter the number of terms: ");
  scanf("%d", &n);

  // Initialize a and b to 0 and 1 respectively
  int a = 0, b = 1;

  printf("Fibonacci series: ");
  for (int i = 1; i <= n; i++) {
    // Print the current value of a
    printf("%d, ", a);

    // Calculate the next term of the fibonacci series
    int next = a + b;

    // Update the values of a and b to the current value of b and the newly calculated next term respectively
    a = b;
    b = next;
  }

  return 0;
}
