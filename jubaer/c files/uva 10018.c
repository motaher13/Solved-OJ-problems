#include <stdio.h>
int main()
{
    long long i,k,r,z,n,t;
   while(scanf("%d",&t)==1){
    while(t--){
  scanf("%lld",&n);
 z=0;
  while(1){
  r=0;
  i=n;

  while(i!=0){
    r=r*10;
    r=r+i%10;
    i=i/10;
    }
    if(n==r){
    printf("%lld %lld\n",z,n);
    break;
    }
    else {
    k=n+r;
    }
    n=k;
    z++;
    }
    }
   }
return 0;
}
