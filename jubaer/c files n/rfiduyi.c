#include <stdio.h>
int ara[10000010], ara2[10000010];
int main()
{
   int i,j,k=2,l=1,m,n,p,q,r,s,t,sum,sum2,up,down;

   ara[1]=1;
   ara2[1]=1;
  up=1;
  down=1;
   while(k!=10000000){
   if(l%2!=0){
    down=down+1;
    for(;down>=1;){
        ara[k]=up;
        ara2[k]=down;
    if(down!=1){
        down--;
        up++;
    }
        k++;
    }
   }
   else if(l%2==0){
    up=up+1;
    for(;up>=1;){
        ara[k]=up;
        ara2[k]=down;
       if(up!=1){
        up--;
        down++;
       }
       k++;
    }

   }

    l++;

   }

}
