#include <stdio.h>
int main()
{
    long long ara[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
    long long ara2[1000],i,j,k,l,m,n,r;
    scanf("%lld",&n);
    m=n;
    l=0;
    for(i=0;m!=1;i++){
    while(m%ara[i]==0){
    m=m/ara[i];
    ara2[l]=ara[i];
    l++;

    }
     if(ara[i]>=sqrt(m))break;
    if(l==0&&ara[i]>=sqrt(m)){
    ara2[l]=n;
    l++;
    break;
    }
    }
    for(r=0;r<l;r++){

    printf("%lld",ara2[r]);
    if(r<l-1)printf("*");
    }
}
