#include <stdio.h>
double add(double n1,double n2)
{

    double sum=n1+n2;
    return sum;
}
int main()
{
    double a,b,c;
    scanf("%lf\n",&a);
    scanf("%lf\n",&b);
    c=add(a,b);
    printf("%lf\n",c);
    return 0;
}
