#include <stdio.h>
int main()
{
    long long n,t,p,q,j=100,r=100;
    while(scanf("%lld",&t)!=EOF){
     while(t--){
     scanf("%lld",&n);
      p=(((((n*567)/9)+7492)*235)/47)-498;
      if(p>=0){
     printf("%lld\n",(p%100)/10);
      }
      else {
        printf("%lld\n",((-1*p)%100)/10);
      }
     }
     }

    return 0;
}
