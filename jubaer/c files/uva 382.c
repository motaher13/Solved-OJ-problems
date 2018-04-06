#include <stdio.h>
int main()
{
    long long i,j,k=0,n,sum,y,t;
   while(scanf("%lld",&n)){
        if(k==0)printf("PERFECTION OUTPUT\n");
       if(n==0){
        printf("END OF OUTPUT\n");
        break;
       }
        sum=0;
    for(i=1;i<=n/2;i++){
    if(n%i==0&&n/i==i)sum=sum+i+i;

    else if(n%i==0)sum=sum+i;
    }
    if(sum==n)printf("%5lld%2cPERFECT\n",n,' ');
     else if(sum<n) printf("%5lld%2cDEFICIENT\n",n,' ');
     else if(sum>n)printf("%5lld%2cABUNDANT\n",n,' ');
     k++;
   }
   return 0;
}
