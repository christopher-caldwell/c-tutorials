#include <stdio.h>

int main()
{
  short width = 312;
  short height = 121;

  // Use int here because using short would cause the number to be negative due to starting over
  int area = width * height;
  short perimeter = (width + height) * 2;

  printf("Area: %i\nPerimeter: %i\n", area, perimeter);
  return 0;
}
