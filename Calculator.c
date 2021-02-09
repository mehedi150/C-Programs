//This is a calculator which is made with the help of switch
#include<stdio.h>
int main ()
{
    double num1,num2;
    char op;
    printf("Enter an operator: \n");
    scanf("%c",&op);
    printf("Enter two number: \n");
    scanf("%lf %lf",&num1,&num2);

    switch(op)
    {
    case '+':
    {
        printf("%lf + %lf = %lf",num1,num2,num1+num2);
        break;
    }
    case '-':
    {
        printf("%lf - %lf = %lf",num1,num2,num1-num2);
        break;
    }
    case '*':
    {
        printf("%lf * %lf = %lf",num1,num2,num1*num2);
        break;
    }
    case '/':
    {
        printf("%lf / %lf = %lf",num1,num2,num1/num2);
        break;
    }
    default:
        printf("Not a valid operator");
    }

    return 0;
}
