#include <stdio.h>
int main()
{
    long long ara[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
    long long i,j,k,n,ck,araf[10000],d,r,l,p,s,t;
    scanf("%lld",&p);
    araf[0]=1;

  /*  if(p<=1000){
        s=2;
        t=385875;
        k=1;
    }
    else if(p>=1001&&p<=2000){
        s=385876;
        t=7077888;
        k=1000;
    }*/
k=1;
    for(i=2;i<=10000000000000000;i++){
            s=i;
            n=s;
    for(j=0;j<25;j++){
       if(j<3){
      while(n%ara[j]==0){
        n=n/ara[j];
        ck=0;
        if(n==1)break;
      }
       }
       if(n==1)break;
       else if(n>1&&j>=3){
        ck=1;
        break;
       }

    }
    if(ck==0){

    k++;
    }
    if(k==p){
            printf("%lld",i);
            break;
    }
    }
    //for(r=0;r<k;r++)printf("%lld\n",araf[r]);
 //  printf("%lld",araf[p-1]);

}
