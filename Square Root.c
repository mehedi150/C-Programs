//Square Root
#include<stdio.h>
#include<math.h>
int
main ()
{
  int num;
  double root;
  printf ("Enter the number: ");
  scanf ("%d", &num);
  root = sqrt (num);
  printf ("The square root is: %lf", root);
  return 0;
}
