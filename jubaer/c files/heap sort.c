#include <stdio.h>
int main()
{
    int a,b,c,i,j,k,ara[10000];
    for(i=0;i<10;i++){
    scanf("%d",&ara[i]);
    }
    b=0;
  // int ara[1000]={4,2,9,-1,5,5,3,7,4,8,2,9,1,3};
    for(i=9/2;i>=1/2;i--){
    j=i;
    t=j*2;
    s=j*2+1;
    while(j!=0){
          if(ara[t]>ara[s])max=t;
          else max=s;

    c=ara[j];
    ara[j]=ara[j/2];
    ara[j/2]=c;
    printf("%d: ",b);
    b++;
    for(k=0;k<10;k++)printf("%d ",ara[k]);
    printf("\n");
    j=j/2;
    }

    }
   for(i=0;i<10;i++)printf("%d ",ara[i]);
}
