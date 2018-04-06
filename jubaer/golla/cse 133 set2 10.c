#include <stdio.h>
int main()
{
    double x,y,a1,b1,c1,a2,b2,c2;
    int n,i;
    scanf("%d",&n);
    i=1;
   while(n--){
    scanf("%lf%lf%lf%lf%lf%lf",&a1,&b1,&c1,&a2,&b2,&c2);
    y=((c1*a2)-(c2*a1))/((b1*a2)-(b2*a1));
    x=(c2-(b2*y))/a2;
    printf("Case %d: x = %.3lf y = %.3lf\n",i,x,y);
    i++;
    }
    return 0;
}
