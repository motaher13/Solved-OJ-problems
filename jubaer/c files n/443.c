#include <stdio.h>
int main()
{
     int ara[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97},du[100];
    int i,q,j,r,k,ck,g,d;
     k=0;
     for(i=2;i<33;i++){
            g=i;
     q=i;
     for(j=0;j<25;j++){
     if(j<4){
      if(q%ara[j]==0){
     ck=0;
     d=ara[j];

     // q=q/d;
      }
     }
     else if(j>=4){
     if(q%ara[j]==0){
            ck=1;
     break;
     }
     }
     }
     if(ck==0){
        du[k]=i;
     k++;
     }
     }
    for(r=0;r<k;r++){
    printf("%d",du[r]);
    }
}
