#include<stdio.h>
int main()
{
    long long n,i,sum;
   while(scanf("%lld",&n)){
         if(n<0)break;
         sum=1;
    for(i=1;i<=n;i++){
    sum=sum+i;
    }
printf("%lld\n",sum);
   }
   return 0;
}
