#include <stdio.h>
int main()
{
   int i,j,k,l,t,n;

  while(scanf("%d",&n)){
        if(n==0)break;
   t=0;
   while(n>=2){
   if(n==2)n=n+1;
   k=n%3;
   j=n/3;
   t=t+j;
   n=j+k;
   }
    printf("%d\n",t);
  }
  return 0;
}
