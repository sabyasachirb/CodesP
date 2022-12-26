
#include <stdio.h>
int main() {
  long long int n;
  int c = 0;
  scanf("%lld", &n);
  do {
    n /= 10;
    ++c;
  } while (n != 0);

  printf("%d digits", c);
}