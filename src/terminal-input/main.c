#include <stdio.h>

int main()
{

  char string[100];
  int number;

  printf("Enter in 2 values separated by spaces. First a number, than anything you'd like.\n");
  scanf("%d %s", &number, string);
  printf("You entered %d -- then %s\n", number, string);

  char secondString[100];
  printf("Enter in anything you'd like.\n");
  scanf("%s", secondString);
  printf("You entered %s\n", secondString);

  return 0;
}