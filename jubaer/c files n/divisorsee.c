#include <stdio.h>
int ara[2000000];
int main()
{
    int a,b,k,l,i,j,max=0,q,p=0;
    scanf("%d%d",&a,&b);
  // a=1;
  // b=10000;
    k=(b/2)+1;
    for(i=a;i<=b;i++){
    ara[i]=1;
    }
    for(j=1;j<=k;j++){
    for(l=2;(l*j)<=b;l++){
       // if((j*l)==900){
              //  p++;
      //  printf("%d :%d %d=%d\n",p,j,l,j*l);
       // }
    ara[j*l]=ara[j*l]+1;
   //printf printf("%d %d\n",ara[j*l],j*l);
    if(max<ara[j*l]&&((j*l)>=a)){
    max=ara[j*l],q=j*l;
    }
    }
    }
    printf("\n%d %d",max,q);
}
