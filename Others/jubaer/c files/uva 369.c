#include <stdio.h>
#include <math.h>
int main()
{
    int ara[1000],ara2[1000],n,r,i,j,k,l,m,p,q,t,d,g,mul1,mul2;
    while(scanf("%d%d",&p,&r)){
   if(p==0&&r==0)break;
    for(i=0,n=p;n>=(p-r+1);n--,i++){
    ara[i]=n;
    }
    for(j=0,q=r;q>0;q--,j++){
    ara2[j]=q;
    }
    for(k=0;k<i;k++){
    g=ara[k];
    for(l=0;l<j;l++){
    d=ara2[l];
  while (d != 0) {
    t = d;
    d = g % d;
    g = t;
  }
    ara[k]=ara[k]/g;
    ara2[l]=ara2[l]/g;
    g=ara[k];
    }
    }
    mul1=1,mul2=1;
    for(k=0;k<i;k++)mul1=mul1*ara[k];
    for(l=0;l<j;l++)mul2=mul2*ara2[l];
    printf("%d things taken %d at a time is %d exactly.\n",p,r,mul1/mul2);
    }
    return 0;
}
