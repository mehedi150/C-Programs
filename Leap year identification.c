//Write a program that reads any year and determine if it's a leap year or not

#include <stdio.h>

int
main ()
{
  int year;
  printf ("Enter any year: ");
  scanf ("%d", &year);
  if (year % 400 == 0)
    printf ("The year is Leap year");
  else if (year % 4 == 0 && year % 100 != 0)
    printf ("The year is Leap year");
  else
    printf ("The year is not Leap year");
  return 0;
}
