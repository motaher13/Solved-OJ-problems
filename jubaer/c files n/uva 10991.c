#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int i;
    scanf("%d",&i);
    while(i--){
    double r1,r2,r3,a,b,c,d,e,f,g,a1,b1,c1;
    scanf("%lf%lf%lf",&r1,&r2,&r3);
    a=r1+r2;
    b=r2+r3;
    c=r3+r1;
    a1=acos(((b*b)+(c*c)-(a*a))/(2*b*c));
    b1=acos(((a*a)+(c*c)-(b*b))/(2*a*c));
    c1=acos(((b*b)+(a*a)-(c*c))/(2*a*b));
    e=(a1*r3*r3)+(b1*r1*r1)+(c1*r2*r2);
    e=e*.5;
    g=(a+b+c)/2;
    f=sqrt(g*(g-a)*(g-b)*(g-c));
    printf("%.6lf",f-e);
    printf("\n");
    }
    return 0;
}
