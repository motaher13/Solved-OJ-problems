#include <stdio.h>
int main()
{
   int i,j,k,n,t,q;
  while(scanf("%d%d",&k,&j)){
      if(k==-1&&j==-1)break;
  if(k<j){
    i=k;
    k=j;
    j=i;
  }
   q=(100+j)-k;
   t=k-j;
   if(q<0)q=-q;
   if(t<0)t=-t;
   if(q<=t)printf("%d\n",q);
   else printf("%d\n",t);
   }
   return 0;
}
