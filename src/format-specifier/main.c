#include <stdio.h>
#include <stdbool.h>

int main()
{
  char charVar = 'd';
  bool someBool = true;
  int someInt = 100;
  float someFloat = 100.21921;
  double someDouble = 100.21921;

  printf("char: %c\n", charVar);
  printf("bool: %i\n", someBool);
  printf("int with i: %i\n", someInt);
  printf("int with d: %d\n", someInt);
  printf("float: %f\n", someFloat);
  printf("double: %e\n", someDouble);
  return 0;
}
