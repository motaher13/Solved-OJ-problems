#include <stdio.h>
int main()
{
    long long i,j,k,sum;
    while(scanf("%lld%lld",&k,&j)==2){
    sum=0;
    for(i=k;1;i++){
    sum=sum+i;
    if(sum>=j&&j<=sum){
            printf("%lld\n",i);
    break;
    }
    }
    }
   return 0;

}
