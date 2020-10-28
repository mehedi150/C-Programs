/*Write a program which can read 3 numbers and display the largest number
 (This program is incomplete because it is not applicable if two of three number are equal)*/
#include <stdio.h>


int
main ()
{
  int a, b, c;
  printf ("Enter three numbers: ");
  scanf ("%d %d %d", &a, &b, &c);
  if (a > b && a > c)
    printf ("The largest number: %d\n", a);
  else if (b > a && b > c)
    printf ("The largest number: %d\n", b);
  else if (c > a && c > b)
    printf ("The largest number: %d", c);

  else
    printf ("The numbers are equal");


  return 0;
}
