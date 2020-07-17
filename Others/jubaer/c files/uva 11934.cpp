#include <stdio.h>
int main()
{
    long long ara[10000],i,j,kl,m,n,a,b,c,d,l,count;
    while(scanf("%lld%lld%lld%lld%lld",&a,&b,&c,&d,&l)){
        if(a==0&&b==0&&c==0&&d==0&&l==0)break;
    count=0;
    for(i=0;i<=l;i++){
    if(((a*i*i)+(b*i)+c)%d==0)count++;
    }
    printf("%lld",count);
    printf("\n");
    }
   return 0;

}
