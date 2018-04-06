#include <stdio.h>
#include <math.h>
int main()
{
    double x,y,z,n,a,t,v,u,q,s;
    q=1;
   while(scanf("%lf",&n)){
        if(n==0)break;
    scanf("%lf%lf%lf",&x,&y,&z);
    if(n==1){
    a=(y-x)/z;

    s=(x*z)+(.5*a*z*z);
    printf("Case %.lf: %.3lf %.3lf\n",q,s,a);
    }
    else if(n==2){
    t=(y-x)/z;
    if(t<0)t=-t;
    s=(x*t)+(.5*z*t*t);
    printf("Case %.lf: %.3lf %.3lf\n",q,s,t);
    }
    else if(n==3){
    v=sqrt((x*x)+(2*y*z));
    t=(v-x)/y;
    if(t<0)t=-t;
    printf("Case %.lf: %.3lf %.3lf\n",q,v,t);
    }
    else if(n==4){
    u=sqrt((x*x)-(2*y*z));
    t=(x-u)/y;
    printf("Case %.lf: %.3lf %.3lf\n",q,u,t);
    }
    q++;
    }
    return 0;
}
