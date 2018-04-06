#include <stdio.h>
#include <math.h>
#define EPS 1e-7
int main()
{
    double p, q, r, s, t,a,b,c,fx,fx1,u;
    int i;
    while(scanf("%lf%lf%lf%lf%lf%lf",&p,&q,&r,&s,&t,&u)){
            if(p==0&&q==0&&r==0&&s==0&&t==0&&u==0){printf("yse\n");
        continue;}
    i=0;
  a=0;
      fx=(p*(exp(-a)))+(q*sin(a))+(r*cos(a))+(s*tan(a))+(t*a*a)+u;
      a=1;
        fx1=(p*(exp(-a)))+(q*sin(a))+(r*cos(a))+(s*tan(a))+(t*a*a)+u;
        if(fx*fx1>0.00)printf("no\n");
        else{
         a=.5;
    while(1){
          //  if(i==5)break;
        fx=(p*(exp(-a)))+(q*sin(a))+(r*cos(a))+(s*tan(a))+(t*a*a)+u;
        fx1=(-p*(exp(-a)))+(q*cos(a))-(r*sin(a))+(s/(cos(a)*cos(a)))+(t*2*a);
       b=a-(fx/fx1);

       if(fabs(b-a)<EPS){
        c=a;
        break;
       }

    a=b;
   i++;
    }
    //if(i==-1)printf("No solution\n");
     printf("%.4lf\n",c);
        }
    }
    return 0;
}
