#include <stdio.h>
int main()
{
    int ara[1000],ara2[1000],n,m,i,t,j,q;

   while(scanf("%d%d",&n,&m)){
  // if(n==0&&m==0){
        printf("%d %d",n,m);
     //   break;
   //}
    for(i=0;i<n;i++){
    scanf("%d",&ara[i]);
    ara2[i]=ara[i]%m;

    }
    for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
    if(ara2[i]>ara2[j]){
    t=ara2[i];
    ara2[i]=ara2[j];
    ara2[j]=t;
    t=ara[i];
    ara[i]=ara[j];
    ara[j]=t;
    }
   else if(ara2[i]==ara2[j]){
    if(ara[i]%2==0&&ara[j]%2!=0){
    t=ara[i];
    ara[i]=ara[j];
    ara[j]=t;
    }
    else if(ara[i]%2==0&&ara[j]%2==0){
    if(ara[i]>ara[j]){
    t=ara[i];
    ara[i]=ara[j];
    ara[j]=t;
    }
    }
    else if(ara[i]%2!=0&&ara[j]%2!=0){
    if(ara[i]<ara[j]){
    t=ara[i];
    ara[i]=ara[j];
    ara[j]=t;
    }
    }
    }
    }
     printf("ha aha%d   %d\n",ara[i],i+1);
    }
    printf("\nclosed\n");

    //printf("start\n");
    for(i=0;i<n;i++){
            ara2[i]=0;

           // if(i==n-1)break;

   }*/
   }

   return 0;
}
