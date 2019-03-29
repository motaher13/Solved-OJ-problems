#include <stdio.h>
#include <math.h>
int main()
{
    double x,y,c,n;
    scanf("%lf",&n);
    while(n--){
    scanf("%lf %lf %lf",&x,&y,&c);
    printf("%.2lf %.2lf\n",c-(sqrt(x*x+y*y)),c+(sqrt(x*x+y*y)));

}
   return 0;
}
