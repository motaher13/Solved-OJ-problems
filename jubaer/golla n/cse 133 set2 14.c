#include <stdio.h>
#define pi 2*acos(0.0)
int main()
{
    int n,i;
    double r,x,y;
    scanf("%d",&n);
    i=1;
    while(n--){
    scanf("%lf",&r);
    x=(2*r)*(2*r);

    y=pi*r*r;
    printf("Case %d: %.2lf\n",i,x-y);
    i++;
    }
    return 0;
}
