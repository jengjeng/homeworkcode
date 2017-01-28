#include <stdio.h>
#include <string.h>

#define is(a,b) (!strcmp(a,b))

int main () {
  char compound1[9], compound2[9], status[6];
  int atom, type = 0;
  printf("Enter compound of matter (carbon/nitrogen/hydrogen) : ");
  scanf("%s", compound1);
  printf("Have more? (carbon/nitrogen/hydrogen/no) : ");
  scanf("%s", compound2);
  printf("Number of atom (4/5/6) : ");
  scanf("%d", &atom);
  printf("Status of matter (gas/liquid/solid) : ");
  scanf("%s", status);
  if (is(compound1, "carbon") && atom == 5 && is(status, "gas"))
    type = 1;
  else if (is(compound1, "carbon") && atom == 6 && is(status, "liquid"))
    type = 2;
  else if (is(compound1, "nitrogen") && atom == 6 && is(status, "gas"))
    type = 3;
  else if (is(compound1, "nitrogen") && atom == 4 && is(status, "solid"))
    type = 4;
  if (type == 1 && is(compound2, "hydrogen"))
    type = 5;
  if (type == 0)
    printf("\n\tThis element is type (unknown)\n");
  else
    printf("\n\tThis element is type %d\n", type);
  return 0;
}
