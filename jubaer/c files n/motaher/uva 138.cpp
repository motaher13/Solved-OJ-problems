#include <iostream>
#include <stdio.h>
using namespace std;
long long ara[20],ara2[20];
int main()
{
    ara[0]=6,ara[1]=35,ara2[0]=8,ara2[1]=49;
   int i,k,j;
   for(i=2;i<10;i++){
   ara[i]=(ara[i-1]*6)-ara[i-2];
    if(i==2){
    ara2[i]=(ara2[i-1]*6)-6;
    }
    else ara2[i]=(ara2[i-1]*6)-ara2[i-2]+2;

   }

   for(i=0;i<10;i++){
   printf("%10lld%10lld\n",ara[i],ara2[i]);

   }
   return 0;
}
