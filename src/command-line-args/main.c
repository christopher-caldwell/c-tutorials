#include <stdio.h>

int main(int argc, char *argv[])
{
  int numberOfArgs = argc; // will be at least 1 - file name then whatever else
  char *fileName = argv[0];
  char *otherArg = argv[1];

  printf("Number of args %d\n", numberOfArgs);
  printf("File name %s\n", fileName);
  printf("What's given to the program %s\n", otherArg);

  return 0;
}
