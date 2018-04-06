#include <stdio.h>
long long ara[1000];
int main()
{
     int i,j,k,l,t,n;
     ara[1]=1,ara[2]=2;
     for(i=3;i<=51;i++){
     ara[i]=ara[i-1]+ara[i-2];
     }
     while(1){
     scanf("%d",&n);
     if(n==0)break;
     printf("%lld\n",ara[n]);

}
    return 0;
}
