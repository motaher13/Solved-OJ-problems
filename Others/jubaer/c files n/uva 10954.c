#include <stdio.h>
int main()
{
    long long i,j,k,n,sum,t,q,l[100];
    long long ara[1000];
scanf("%lld",&n);
            //if(n==0)break;
    for(i=0;i<n;i++){
    scanf("%lld",&ara[i]);
    } if(n%2!=0){
            q=ara[n-1];
        }
        else q=0;

    for(i=0,j=0;i<n;i=i+2,j++){
            l[j]=ara[i]+ara[i+1];
            printf("%lld\n",l[j]);
   q=q+l[j];
   printf("%lld\n",q);
   if(i+1==n-1)break;
    }
    for(i=0;i<=j;i++){
        q=q+l[i];
    }
    printf("%lld",q);

    return 0;
}
