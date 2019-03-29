#include <stdio.h>
int main()
{
    long long i,j,a,n,b,c,sum,t;
    while(scanf("%lld",&t)==1){
    for(j=0;j<t;j++){
            sum=0;
    scanf("%lld",&n);

    for(i=0;i<n;i++){
    scanf("%lld%lld%lld",&a,&b,&c);
    sum=sum+(a*c);


    }
     printf("%lld\n",sum);
    }
    }

    return 0;
}
