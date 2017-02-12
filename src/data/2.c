#include <stdio.h>

#define isOdd(x) x%2==1

int main()
{
  int num[10];
  printf("Please input 10 numbers.\n");
  for (int i = 0; i < 10; i++)
  {
    printf("numbers[%d] : ", i + 1);
    scanf("%d", &num[i]);
  }
  printf("Results : ");
  for (int i = 1; i < 9; i ++)
  {
    if (isOdd(num[i - 1]) && isOdd(num[i + 1]))
      printf("%d ", num[i]);
  }
  return 0;
}
