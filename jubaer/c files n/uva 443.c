#include <stdio.h>
int main()
{
     long long ara[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97},du[100];
    long long i,n,t,q,j,r,max,k,u,d,ck=0;
     k=0;
     for(i=2;i<100;i++){
     q=i;
     for(j=0;q!=1;j++){

      if(q%ara[j]==0&&j<4){
     ck=0;
      q=q/ara[j];
      }


     else if(q%ara[j]==0&&j>2){
            ck=1;
     break;
     }
     }

     if(ck==0){
            du[k]=i;
     k++;
     //if(k==1500){
        //printf("%lld",i);
        //break;
   //  }
     }
     }
   for(r=0;r<k;r++) printf("%d",du[r]);
}
