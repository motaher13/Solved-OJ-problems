#include <stdio.h>
long long ara[1000];
int main()
{
     int i,j,k,l,t,n;
     j=1;
     ara[1]=1,ara[2]=2;
     for(i=3;i<=51;i++){
     ara[i]=ara[i-1]+ara[i-2];
     }
       scanf("%d",&t);
     while(t--){
     scanf("%d",&n);
     printf("Scenario #%d:\n%lld\n\n",j,ara[n]);
     j++;

}
    return 0;
}
