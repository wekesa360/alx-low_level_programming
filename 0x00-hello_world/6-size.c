#include <stdio.h>
int main ()
{
  printf("Size of a char: %u byte(s)\n", sizeof(char));
  printf("Size of an int: %u byte(s)\n", sizeof(int));
  printf("Size of a long int: %u byte(s)\n", sizeof(long));
  printf("Size of a long long int: %u byte(s)\n", sizeof(long));
  printf("Size of a float: %u byte(s)\n", sizeof(float));
  return 0;
}
