#include <stdio.h>

#define N 4
#define menuPrice(prices, orders, index) (orders[index] * prices[index])

double totalPrice(const double prices[], int orders[]) {
  double total = 0;
  for (int i = 0; i < N; i++) {
    total += menuPrice(prices, orders, i);
  }
  return total;
}

void showOrderMessage(int order, const char title[], const double price, double total) {
  printf("You have ordered %d of %s(%.0lf) ==> %.2lf\n", order, title, price, total);
}

int main () {
  const char menu[N][10] = {"Pizza", "Hamburger", "Sandwich", "Water"};
  const double prices[N] = {150, 50, 25, 10};
  int orders[N] = {0, 0, 0, 0};
  int x, i;
  do {
    printf("Select menu :\n");
    for (int i = 0; i < N ; i++) {
      printf("\t%d.%-15s%-4.0f Bath. (# %d)\n", (i + 1), menu[i], prices[i], orders[i]);
    }
    printf("\t%d.%-15s\n", 0, "Calculate Money");
    scanf("%d", &x);
    if (x > 0 && x <= N) {
      i = x - 1;
      orders[i]++;
      showOrderMessage(orders[i], menu[i], prices[i], totalPrice(prices, orders));
    }
  } while(x != 0);
  for (int i = 0; i < N ; i++) {
    showOrderMessage(orders[i], menu[i], prices[i], menuPrice(prices, orders, i));
  }
  printf("\nTotal payment = %.2lf\n", totalPrice(prices, orders));
  return 0;
}
