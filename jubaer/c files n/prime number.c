#include <stdio.H>
int main()
{
    long long i,j,k,l,n,ara[1000];
    scanf("%lld",&n);
   l=0;
    for(i=1;i<=n;i++){
            int ck=0;

    for(k=2;k<=sqrt(i);k++){
    if(i%k==0){
            ck=1;
            break;
    }
    else if(k==sqrt(i)){
            ck=0;
    break;
    }
    }
    if(ck==0&&i!=1){
            //printf("%d\n",i);
    ara[l]=i;
    l++;

    }
}

 /* for(j=0;j<l;j++){
    while(n%ara[j]==0){
            printf("%d",ara[j]);
           n= n/ara[j];
           if(n>1)printf("*");
           // continue;
    }
    if(n==1)break;
    //else printf("*");
   // else if(n==1)break;
  }*/
for(j=0;j<l;j++)printf("%lld  %lld\n",ara[j],j);

}
