//Identifying the positive or negative numbers
#include <stdio.h>

int
main ()
{
  float num;
  printf ("Enter the number: ");
  scanf ("%f", &num);
  if (num > 0)
    printf ("The number is positive");
  else if (num < 0)
    printf ("The number is negative");
  else
    printf ("The number is zero");
  return 0;
}
