#include <stdio.h>
int main()
{
    long long per,bud,hot,week,i,j,k,pri,bed,max,kk,ck;
    while(scanf("%lld%lld%lld%lld",&per,&bud,&hot,&week)){
    max=2132632667;

    kk=0;
    for(i=0;i<hot;i++){
    ck=1;
    scanf("%lld",&pri);
    for(j=0;j<week;j++){
    scanf("%lld",&bed);
    sum=sum+bed;
   // printf("ck==%lld\n",ck);
    }
    if(ck==1&&((per*pri)<=bud)&&((per*pri)<max)){

    max=per*pri;

    kk=1;
//  printf("kk=%d\n",kk);

    }
    }
 if(kk==1)printf("%d\n",max);
 else printf("stay home\n");
    }
 return 0;
 }
