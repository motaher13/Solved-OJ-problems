#include <stdio.h>
double add(double x,double y);
int main()
{
    double a,b,c;
    a=b=7.9;
    c=add(a,b);
    printf("%lf\n",c);
    return 0;
}
double add(double r,double s)
{
    double sum=r+s;
    return sum;
}
