// Swaping two numbers with each other
#include<stdio.h>
int
main ()
{
  int num1 = 10;
  int num2 = 70;
  int temp;

  temp = num1;
  num1 = num2;
  num2 = temp;
  printf ("First Number: %d\n", num1);
  printf ("Second Number: %d", num2);
  return 0;

}
