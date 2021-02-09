#include<stdio.h>
int main ()
{
    int choice;
    float temp,convtemp;
    printf("Temperature conversion menu: \n");
    printf("1. Fahrenheit to Celsius\n");
    printf("2. Celsius to Fahrenheit\n");
    printf("Enter your choice: \n");
    scanf("%d",&choice);

    switch(choice)
    {


    case 1:
    {
        printf("Enter the Fahrenheit temperature: \n");
        scanf("%f",&temp);
        convtemp = (temp-32)/1.8;
        printf("The Celsius temperature is: %f\n",convtemp);

        break;

    }
    case 2:
    {
        printf("Enter the Celsius temperature: \n");
        scanf("%f",&temp);
        convtemp = (1.8 * temp)+32;
        printf("The Fahrenheit temperature is: %f\n",convtemp);
        break;

    }
    default:
        printf("Not a valid choice");
    }

    return 0;
}
