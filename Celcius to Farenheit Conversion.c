// Conversion from Celcius to Farenheit
#include<stdio.h>
int
main ()
{
  float C, F;
  printf ("Enter the centrigrade: ");
  scanf ("%f", &C);

  F = (1.8 * C) + 32;
  printf ("The farenheit: %f", F);


}
