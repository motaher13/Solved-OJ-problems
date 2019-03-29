#include <stdio.h>
int main()
{
    long long per,bud,hot,week,i,j,k,pri,bed,max,kk,ck;
    while(scanf("%lld%lld%lld%lld",&per,&bud,&hot,&week)==4){
    max=2132632667;
    kk=0;
    for(i=0;i<hot;i++){
    ck=1;
    scanf("%lld",&pri);
    for(j=0;j<week;j++){
    scanf("%lld",&bed);
    if(bed>=per)ck=1;
    }
    if(ck==1&&((per*pri)<=bud)&&((per*pri)<max)){
    max=per*pri;
    kk=1;
    }
    }
 if(kk==1)printf("%lld\n",max);
 else printf("stay home\n");
    }
 return 0;
 }
