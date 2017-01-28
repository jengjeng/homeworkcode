#include <stdio.h>

#define N 5
#define S "********************"

int main () {
  for (int i = 0, j, n = N + 2; j = i < N ? i : i == n, printf("%*.*s\n", N + j, 1 + 2 * j, S), i++ < n;);
  return 0;
}
