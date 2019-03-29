#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
long long ara[100],ara2[100],t,q,visit[100],ck,sum=1;
  int n;
  int a,b,c,d,i;
    for(i=1;i<=31;i++){
    sum=sum*2;
    visit[i]=0;
ara[i]=sum;
    }
 for(i=2;i<=31;i++){
    ara2[i]=(ara[i-1])*(ara[i]-1);
    if(i==2||i==3||i==5||i==7||i==13||i==11||i==17||i==23||i==19||i==29||i==31){
        q=ara[i]-1;
        ck=1;
        for(t=2;t<=sqrt(q);t++){
            if(q%t==0){
                ck=0;
                break;
            }
        }
        if(ck==1){
            visit[i]=1;
        }
    }
 }
 while((cin>>n)){
      if(n==0);
     else if(n==1)printf("Perfect: %lld!\n",n);
    else if(visit[n]==1){
    printf("Perfect: %lld!\n",ara2[n]);
     }
     else if(n==23||n==29||n==11){
        printf("Given number is prime. But, NO perfect number is available.\n");
     }
     else printf("Given number is NOT prime! NO perfect number is available.\n");
 }
 return 0;
}
