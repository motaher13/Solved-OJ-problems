#include <stdio.h>
int dp[10000],ara[6];
int i,j,k,l,m,n,t,x;
int fibo(int n){

    if(n==0)return ara[0];
     else if(n==1)return ara[1];
     else if(n==2)return ara[2];
     else  if(n==3)return ara[3];
       else if(n==4)return ara[4];
       else if(n==5)return ara[5];
     else if(dp[n]!=-1){
        return dp[n];
     }
     else {
        dp[n]=fibo(n-1)+fibo(n-2)+fibo(n-3)+fibo(n-4)+fibo(n-5)+fibo(n-6);
        return dp[n]%10000007;
     }
}
int main()
{

    scanf("%d",&t);
    j=1;
    while(t--){
        for(i=0;i<6;i++){
            scanf("%d",&ara[i]);
        }
        scanf("%d",&n);
        for(i=0;i<=n;i++){
           dp[i]=-1;
        }
        x=fibo(n);
         printf("Case %d: %d\n",j,x%10000007);
         j++;
    }
     return 0;
}
