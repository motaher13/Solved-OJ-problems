#include <stdio.h>
#include <math.h>

double logic[1000000],logic2[1000000];
int main()
{
   double x,y,z,r,t,u;
   int i,j,k,l,n;
 while(scanf("%d",&l)){
     u=0;
        if(l==0)break;
   getchar();
   while(l--){
  scanf("%lf",&t);
  i=0;
  j=0,k=0;
  while(1){
  scanf("%lf%lf",&logic[k],&logic2[k]);
  if(logic[k]==logic[0]&&logic2[k]==logic2[0]&&k>0)break;
  k++;
  }
 x=0,y=0;
 for(n=0;n<k;n++){
    x=x+(logic[n]*logic2[n+1]);
    y=y+(logic2[n]*logic[n+1]);
 }
 r=(t*(x-y))/2;
 if(r<0)r=-r;
 u=u+r;
   }
   scanf("%lf%lf",&x,&z);
  printf("%.lf\n",(u/(3.1415926535897932*x*x*z)));

 }

return 0;
}
