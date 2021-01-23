//Even or Odd determination
#include<stdio.h>
int
main ()
{
  int x;
  printf ("Enter an integer: ");
  scanf ("%d", &x);

  if (x % 2 == 0)
    printf ("Even\n");
  if (x % 2 != 0)
    printf ("Odd");
  return 0;

}
