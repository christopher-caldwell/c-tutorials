#include <stdio.h>
#include <stdbool.h>

int main()
{
  enum gender
  {
    male,
    female
  };

  enum gender myGender = male;
  bool isGivenGenderMyGender = (myGender == male);

  if (isGivenGenderMyGender)
  {
    printf("%d", myGender);
  }

  return 0;
}
