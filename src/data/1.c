#include <stdio.h>
#include <string.h>
#include <conio.h>

int stringMatch(char str[100], char str2[100]) {
  return strcmp(str, str2) == 0;
}

int main()
{
  char id[100], password[100], temp[100];
  int i;
  printf("------- Register -------\n");
  printf("Enter your ID: ");
  scanf("%s", id);
  printf("Enter your password: ");
  scanf("%s", password);
  printf("\n");
  printf("------- Login -------\n");
  printf("Enter your ID: ");
  scanf("%s", temp);
  
  printf("Enter your password: ");
  for (i = 0; temp[i] = getch(), temp[i] != '\n'; i++)
  {
    printf("*");
  }
  password[i] = '\0';
  printf("\n");
  if (stringMatch(id, temp))
  {
    printf("\n\tSsuccessful Logon.");
    printf("\n\tHello! %s", id);
    printf("\n\tYour password : %s", password);
  }
  else
  {
    printf("\n\tYour ID or Password isn't correct");
    printf("\n\tPlease try again");
  }
  

  return 0;
}
