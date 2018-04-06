#include <stdio.h>
int main()
{
    long long i,j,k,n,l;
    while(scanf("%lld",&n)==1){
    l=n;
    for(i=2;i<=n/2;i++){
    if(n%i==0){
    printf("%lld is not prime.\n",l);
    break;
    }
    else if(i==n/2){
  k=0;
    for(i=0;n!=0;i++){
    k=k*10+n%10;
    n=n/10;
    }
    if(k==l){
        printf("%lld is prime.\n",l);
    }
    else{
   for(j=2;j<=k/2;j++){
    if(k%j==0){
            printf("%lld is prime.\n",l);
        break;
    }
    else if(j==k/2){
        printf("%lld is emirp.\n",l);
    }
   }
    }
    }
    }
    }
    return 0;

}
