#include <stdio.h>
#include <math.h>
int main()
{
    double n,t,q,r,u;
    int e;
    while(scanf("%lf",&n)){
            if(n==0)break;
    if(n<0){
            n=-n;
            printf("-");
    }

    t=.3333334;

    e=pow(n,t);
    printf("%d\n",e);

    q=n-(pow(e,3));
   r=q/(3*(e*e));
    u=e+r;
    printf("%.4lf\n",u);
    }
    return 0;
}
