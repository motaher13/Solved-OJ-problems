#include <stdio.h>
int main()
{
    double x;
    while(scanf("%lf",&x)==1){
    if(x==(int)x)printf("%0.lf %0.lf\n",x,x);
    else printf("%d %d\n",(int)x,(int)x+1);
    }
    return 0;
}
