#include <stdio.h>
int main()
{
    long long i,n,j,k,ara[5000],l[5000],u,q,p,r;
    while(scanf("%lld",&n)){
            if(n==0)break;
    for(i=1;i<=n;i++){
    scanf("%lld",&ara[i]);
    }
      if(n%2==0){
    q=ara[n];
    p=ara[n-1];
    for(i=1,j=0;i<=n-2;i=i+2,j++){
    l[j]=ara[i]+ara[i+1];

    }

    for(k=j,u=0;u<j;k++,u++){
    l[k]=p+l[u];
    p=l[k];

    }
    l[k]=q+p;

    int sum=0;
    for(r=0;r<=k;r++){
            sum=sum+l[r];

    }

    printf("%lld\n",sum);
}
     else{
        q=ara[n];
        for(i=1,j=0;i<=n-1;i=i+2,j++){
            l[j]=ara[i]+ara[i+1];

        }
        for(k=j,u=0;u<j;u++,k++){
            l[k]=q+l[u];
            q=l[k];

        }
       int sum=0;
        for(j=0;j<k;j++){
                sum=sum+l[j];

        }
        printf("%lld\n",sum);
     }
    }
    return 0;
}
