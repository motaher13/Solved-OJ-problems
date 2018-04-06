#include <stdio.h>
#include <math.h>
int main()
{

    double area,a,b;
    while(scanf("%lf%lf",&b,&a)==2){
    area=((a*b*b)/2)*sin(2.0*3.14159265358979323846264338327950288/a);
    printf("%.3lf\n",area);
    }
    return 0;

}
