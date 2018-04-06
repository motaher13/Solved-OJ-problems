#include <stdio.h>

int main()
{
    int i,j,k,l,m,n,r,t,d,q;
    long long min;
    int ara[250000],ara2[250000];
    r=1;
    while(scanf("%d",&n)){
            if(n==0)break;
    for(i=0;i<n;i++){
    scanf("%d",&ara[i]);
    }
    scanf("%d",&m);
    for(i=0;i<m;i++){
    scanf("%d",&ara2[i]);
    }
    printf("Case %d:\n",r);
    for(k=0;k<m;k++){
    min=1000000000;
    for(i=0;i<n-1;i++){
    for(j=i+1;j<n;j++){
     d=(ara2[k]-(ara[i]+ara[j]));
     if(d<0)d=-d;
     if(d<min){
     min=d;
     q=(ara[i]+ara[j]);
     }
     }
    }
     printf("Closest sum to %d is %d.\n",ara2[k],q);
     }
     r++;
     }
    return 0;
}
