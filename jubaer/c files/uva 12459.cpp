#include <stdio.h>
long long ara[100];
int main(){
    int i;
    ara[1]=1;
    ara[2]=2;
   for(i=3;i<=80;i++){
    ara[i]=ara[i-1]+ara[i-2];
   }
   while(scanf("%d",&i)){
        if(i==0)break;
    printf("%lld",ara[i]);
    printf("\n");
   }
  return 0;
}
