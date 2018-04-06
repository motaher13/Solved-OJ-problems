#include <stdio.h>
int main()
{
    long long t;
    int n,k,p,l,i,u;

  scanf("%lld",&t);
   u=1;
  while(scanf("%d%d%d",&n,&k,&p)){
   l=0;
   i=k;
    while(l!=p){
        if(i==n)i=1;
            else i++;
        l++;
        if(l==p){
        printf("Case %d: %d\n",u,i);
       break;
        }


    }

  if(u==t)break;
  u++;
    }
     return 0;
}
