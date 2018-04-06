#include <stdio.h>
int main()
{
    long long n,m,t,l;
   while(scanf("%lld",&n)!=EOF){
    m=n-(n/2);
    m=m*m;

            t=(2*m)-1;




    l=t+(t-2)+(t-4);
    printf("%lld\n",l);
   }
  return 0;
}
