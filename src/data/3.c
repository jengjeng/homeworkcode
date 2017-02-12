#include <stdio.h>

int indexOf(double num[5], double find) {
  for (int i = 0; i < 5; i++)
    if (num[i] == find)
      return i;
  return -1;
}

int main()
{
  double num[5], find;
  char input[2];
  int index;
  printf("Please input 5 numbers into array\n");
  for (int i = 0; i < 5; i++)
  {
    printf("\tnumbers[%d] : ", i);
    scanf("%lf", &num[i]);
  }
  printf("\n");
  printf("-------------------\n");
  do {
    printf("Input a number you want to find : ");
    scanf("%lf", &find);
    index = indexOf(num, find);
    if (index  >= 0) {
      printf("\tYou found a number %.2lf at address %p", num[index], &num[index]);
    }
    else {
      printf("\tCannot find the matched data.");
    }
    printf("\nDo you want to find more? [Y/N] : ");
    scanf("%s", input);
  } while (input[0] == 'y' || input[0] == 'Y');
  printf("\nThank you for using my program!");
  return 0;
}
