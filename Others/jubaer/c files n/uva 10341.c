#include <stdio.h>
#include <math.h>
#define EPS 1e-13
int p, q, r, s, t,u;
double a,a1,e,f,c,x,y;

int main()
{
   while(scanf("%d%d%d%d%d%d",&p,&q,&r,&s,&t,&u)==6){
    if(p==0&&q==0&&r==0&&s==0&&t==0&&u==0){
        printf("0.0000");
    }
        else {
            x=(p*exp(-0))+(q*sin(0))+(r*cos(0))+(s*tan(0))+t*0+u;
            y=(p*exp(-1))+(q*sin(1))+(r*cos(1))+(s*tan(1))+t*1+u;
              if((x*y)>0)printf("No solution");
              else{
               a=.5;
               while(1){
                x=(p*exp(-a))+(q*sin(a))+(r*cos(a))+(s*tan(a))+t*a*a+u;
                y=-(p*exp(-a))+(q*cos(a))-(r*sin(a))+(s/(cos(a)*cos(a)))+t*a*2;
                a1=a-(x/y);
                if(fabs(a1-a)<EPS){
                    printf("%.4lf",fabs(a));
                    break;
                }
                a=a1;
               }
              }
        }
        printf("\n");
   }
   return 0;
}
