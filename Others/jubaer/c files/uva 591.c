#include <stdio.h>
int main()
{
    long long i,j,n,set,avg,l,sum,r=1;
   long long int ara[500];
    while(scanf("%lld",&n)){
        sum=0;
            if(n==0)break;
    set=0;
    for(i=0;i<n;i++){
    scanf("%lld",&ara[i]);
    set=set+ara[i];
    }
    avg=set/n;
    for(i=0;i<n;i++){
    if(ara[i]<avg){
     l=avg-ara[i];
     sum=sum+l;
    }
    }
    printf("Set #%lld\nThe minimum number of moves is %lld.\n\n",r,sum);
    r++;
    }
 return 0;
}
