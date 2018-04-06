#include <stdio.h>
#include <math.h>
int main()
{
    long long ara[1000],ara2[1000],n,r,i,j,k,l,m,p,q,t,d,g,mul1,mul2,ara3[1000],ara4[10000],u;
    u=0;
    for(i=0;i<=25;i++){
    r=i;
    ara3[u]=i;
    p=2*i;
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
   d=mul1/mul2;
   ara4[u]=d/(r+1);
   u++;
    }
    while(scanf("%lld",&n)==1){
            if(n==0||n==1)printf("1\n");
    else
    for(i=0;i<u;i++){
        if(ara4[i]==n)printf("%d\n",ara3[i]);
    }
    }

    return 0;
}
