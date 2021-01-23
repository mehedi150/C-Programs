// Farenheit to Celcius conversion
#include<stdio.h>
int
main ()
{
  float C, F;
  printf ("Enter the farenheit temparature: ");
  scanf ("%f", &F);

  C = (F - 32) / 1.8;
  printf ("Celcius temparature is: %.2f", C);



}
