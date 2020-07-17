#include <stdio.h>
#include <limits.h>
int main()
{
    int i,j,k,l,m,n,r,t,d,q;
    long long min;
    int sum[155000],ara[155000],ara2[155000];
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
    l=0;
    for(i=0;i<n-1;i++){
    for(j=i+1;j<n;j++){
    sum[l]=ara[i]+ara[j];
    l++;
    }
    }
     printf("Case %d:\n",r);
    for(i=0;i<m;i++){
    min=10000000000;
    for(j=0;j<l;j++){
    d=ara2[i]-sum[j];
    if(d<0)d=-d;
    if(d<min){
    min=d;
    q=sum[j];
    }
    }
    printf("Closest sum to %d is %d.\n",ara2[i],q);
    }
     r++;
    }
    return 0;
}
