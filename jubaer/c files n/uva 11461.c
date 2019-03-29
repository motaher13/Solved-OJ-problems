#include <stdio.h>
#include <math.h>
int main()
{
    long long i,j,k,l;
    while(scanf("%lld%lld",&k,&j)){
    l=0;
    if(k==0&&j==0)break;
    for(i=k;i<=j;i++){
    if((int)sqrt(i)==(double)sqrt(i)&&i!=0){
    l++;
    }
    }
    printf("%lld\n",l);

    }
    return 0;
}
