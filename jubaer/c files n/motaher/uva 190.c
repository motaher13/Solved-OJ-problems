#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <iomanip>
#include <math.h>
using namespace std;
int main()
{
    char str[100];
    double x,y,a,b,p,q,r,s,t,u,v,w,z,k,l,m,i,ck;
   while(cin>>x>>y>>a>>b>>p>>q){
        ck=0;
     r=-(x*x+y*y);
     s=-(a*a+b*b);
     t=-(p*p+q*q);
     u=(2*x*(2*b-2*q))-(2*y*(2*a-2*p))+((2*a*2*q)-(2*b*2*p));
     v=(r*(2*b-2*q))-(2*y*(s-t))+((s*2*q)-(2*b*t));
      w=(2*x*(s-t))-(r*(2*a-2*p))+((2*a*t)-(s*2*p));
       z=(2*x*(2*b*t-2*q*s))-(2*y*(2*a*t-2*p*s))+r*((2*a*2*q)-(2*b*2*p));
       k=v/u;
       l=w/u;
       m=z/u;
       if(m==0){
      sprintf(str,"%lf",m);
      if(str[0]=='-')ck=1;
       }
       i=sqrt(k*k+l*l-m);
    printf("(x ");
    if(k<0)printf("- %.3lf)^2 + (y ",-k);
  else printf("+ %.3lf)^2 + (y ",k);
   if(l<0)printf("- %.3lf)^2 = %.3lf^2\n",-l,i);
  else printf("+ %.3lf)^2 = %.3lf^2\n",l,i);
  printf("x^2 + y^2 ");
  if(k<0)printf("- %.3lfx ",-k*2);
  else printf("+ %.3lfx ",k*2);
   if(l<0)printf("- %.3lfy ",-l*2);
  else printf("+ %.3lfy ",l*2);
if(m==0){
        m=m*0;
        if(ck==1)printf("= 0\n");
        else printf("+ %.3lf = 0\n",m);
}
  else{
   if(m<0)printf("- %.3lf = 0\n",-m);
  else if(m>0) printf("+ %.3lf = 0\n",m);
  }

  printf("\n");
   }
   return 0;
}
