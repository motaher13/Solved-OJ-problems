#include <stdio.h>
int main()
{
    long long ara[105],cal1[10000],cal2[10000],j,t,i;
    ara[0]=1;
    ara[1]=1;
    cal1[1]=1;
    cal2[1]=2;
    j=1,t=1;
    for(i=2;i<=100;i++){
        ara[i]=ara[i-1]+ara[i-2];
        t++;
      cal1[t]=cal2[j];
      j++;
      cal2[j]=cal2[j-1]+ara[i];
    }
    while(scanf("%lld",&i)){
            if(i==-1)break;
            if(i==0)printf("0 1");
            else
        printf("%lld %lld",cal1[i],cal2[i]);
    printf("\n");

    }
    return 0;

}
