#include <stdio.h>
int main()
{
    long long i,n,ck,t,k,d;
  while(scanf("%lld",&n)==1){
            if(n==0)break;
    d=0;
    t=0;
    for(i=1;i<=n/2;i++){
    if(t==i)break;
    if(n%i==0){
    t=n/i;

    d++;
    if(n/i==i){
        ck=0;
    }
    else ck=1;
    }
    }
    if(ck==0)k=2*d-1;
    else if(ck==1)k=2*d;
    if(k%2==0)printf("no\n");
    else printf("yes\n");
  }
    return 0;
}
