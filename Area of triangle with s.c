// Area of triangle= sqrt(s*(s-a)*(s-b)*(s-c))
#include<stdio.h>
int main()
{
    double a,b,c,s,area;
    printf("Enter the values of 3 lines: ");
    scanf("%lf %lf %lf",&a,&b,&c);
    s = (a + b + c)/2;
    
    area= sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area= %.2lf",area);
    
    return 0;
}
