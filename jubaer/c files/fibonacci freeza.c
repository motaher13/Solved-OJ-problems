#include <stdio.h>
int main()
{
     long long c,a,b,n,i;
   while(scanf("%lld",&n)==1){
        a=0;b=1;
   for(i=0;i<=n;i++){
        if(i==n){
                //itoa(a,str,10);
   printf("The Fibonacci number for %lld is %lld\n",n,a);
        }
   c=a+b;
   a=b;
   b=c;
   }
   }
   return 0;
}
