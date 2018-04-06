#include <stdio.h>
double add(double num1,double num2)
{
       double num=num1+num2;
       return num;
}
int main()
{
    double a,b,c;
    a=b=2.5;
    c=add(a,b);
    printf("%lf",c);
    return 0;
}
