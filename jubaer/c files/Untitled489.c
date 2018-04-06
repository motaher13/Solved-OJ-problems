#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c,i;
    double j;
    printf("axx+bx+c=0,find out\n the value of x");
    scanf("%d",&a);
    scanf("%d  %d",&b,&c);

    i=(b*b)-4*a*c;
    j=sqrt(i);
    if(i>=0){
    printf("%lf",((-b)-j)/(2*a));


    }




}
