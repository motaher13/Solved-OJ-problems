#include <stdio.h>
#include <math.h>
long long ara[105][105];
int main(){
    long long sum;
   long long i,j,k,l=0,cou,visit,n,u,r=1,t;
  while(scanf("%lld",&n)){
        if(n==0)break;
        cou=0;
        sum=0;
  l=0;
  visit=0;
   for(i=0;i<n;i++){
   for(j=0;j<n;j++){
    scanf("%lld",&ara[i][j]);
   }
   }
   k=0;
   printf("Case %lld:",r);
   r++;
  while(visit<=n*n){

   for(j=cou;j<n-cou;j++){
   sum=sum+ara[cou][j];
   visit++;
   }
 if(visit==n*n){
            printf(" %lld",sum);
            break;
    }
  for(j=cou;j<n-cou;j++){
  sum=sum+ara[n-l-1][j];
  visit++;
  }
 if(visit==n*n){
            printf(" %lld",sum);
            break;
    }
  for(i=cou+1;i<n-1-cou;i++){
    sum=sum+ara[i][cou];
    visit++;
  }
    if(visit==n*n){
            printf(" %lld",sum);
            break;
    }
  for(i=cou+1;i<n-1-cou;i++){
    sum=sum+ara[i][n-l-1];
    visit++;
  }

    if(visit==n*n){
            printf(" %lld",sum);
            break;
    }

    printf(" %lld",sum);
 l++;
 sum=0;
 cou++;
k++;
  }
  printf("\n");
  }
 return 0;
}
