#include <stdio.h>
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
    if(i%2==0){
       scanf("%lf",&logic[j]);
       j++;
    }
    else {
             scanf("%lf",&logic2[k]);
        k++;
    }
    if(getchar()=='\n')break;
    i++;
  }
  if(logic[j-1]!=logic[0]||logic2[k-1]!=logic2[0]){
    logic2[k]=logic2[0];
    k++;
    logic[j]=logic[0];
    j++;
  }
  x=0,y=0;
 for(n=0;n<k-1;n++){
    x=x+(logic[n]*logic2[n+1]);
    y=y+(logic2[n]*logic[n+1]);
 }
 r=(t*(x-y)/2);
 if(r<0)r=-r;
 u=u+r;
   }
   scanf("%lf%lf",&x,&z);
   printf("%.lf\n",u/( 3.141592653589793238*x*x*z));
}
return 0;
}
