#include <stdio.h>
int dp[20];
int fibo(int n){

    if(n==0)return 1;
    else if(n==1)return 1;
    if(dp[n]!=-1){
        return dp[n];
    }
    else {
            dp[n]=fibo(n-1)+fibo(n-2);
             return dp[n];
    }
}
int main()
{
    int i;
    for(i=0;i<20;i++){
        dp[i]=-1;
    }
    scanf("%d",&i);
    i=fibo(i);
    printf("%d\n",i);

}
