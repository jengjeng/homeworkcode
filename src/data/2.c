#include <stdio.h>

#define dis(p) (p > 5000 ? .05*p : p >= 1000 ? .03*p : p > 100 ? .01*p : 0)

int main () {
  double price, discount;
  printf("%-11s : ", "Enter price");
  scanf("%lf", &price);
  discount = dis(price);
  printf("%-11s : %.2lf\n", "Price", price);
  printf("%-11s : %.2lf\n", "Discount", discount);
  printf("%-11s : %.2lf\n", "Total", price - discount);
  return 0;
}
