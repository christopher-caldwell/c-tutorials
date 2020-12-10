#include <stdio.h>

int main()
{
  enum gender
  {
    male,
    female
  };

  enum gender myGender = male;

  if (myGender == male)
  {
    printf("%d", myGender);
  }

  return 0;
}
