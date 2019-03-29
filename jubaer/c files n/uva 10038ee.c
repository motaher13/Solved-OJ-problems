#include <stdio.h>
int main()
{
    long long i,j,k,n,ara[100000],sum[100000],ck;
    while(scanf("%lld",&n)==1){
    for(i=1;i<=n;i++){
    scanf("%lld",&ara[i]);
    }
    for(i=1;i<=n-1;i++){
    sum[i]=ara[i]-ara[i+1];
    if(sum[i]<0)sum[i]=-sum[i];
    }
    ck=0;
    for(k=1;k<=n-1;k++){
    for(i=1;i<=n-1;i++){
    if(k==sum[i]){
            ck++;
    break;
    }
    }
    }
    if(ck==n-1)printf("Jolly\n");
    else printf("Not jolly\n");
}
return 0;
}
