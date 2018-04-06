#include <stdio.h>
int main()
{
    long long max,a,b,c=1,d,n,sum,i;
    scanf("%lld",&d);
    while(d--){
    scanf("%lld",&n);
    max=0;
    sum=0;
    for(i=1;i<n;i++){
        scanf("%lld%lld",&a,&b);
        sum=sum+a;
        sum=sum-b;
        if(max<sum){
                max=sum;
        }
    }
    printf("Case %lld: %lld",c++,max);
    printf("\n");
    }
    return 0;
}
