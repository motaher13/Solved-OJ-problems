#include <stdio.h>
int main()
{
long long ara[100000],i,j,k,l,m,n,q,t,u,mul,ck;
     ara[2]=2;
     ara[3]=6;
     k=6;
    for(i=4;i<=10000;i++){
    n=i;
    u=ara[i-1];

    if(n%5==0){
    u=u/2;
long long    r=0;
    while((n%5)==0){
    n=n/5;
    r++;
    if(n%5!=0)break;
    //printf("%d ",n);

    if(r==3)break;
    }
    }
   // if(i==5)printf("%d %d\n",n,u);
    m=u*n;
    l=0;
    mul=1;
    q=0;
    ck=0;
    while(m!=0)
    {
    t=m%10;
    if(t!=0)ck=1;
    if(ck==1){
    q=q+(mul*t);
    l++;
    mul=mul*10;
    if(l==12)break;
    }
   m=m/10;
    }

 ara[i]=q;

    }
scanf("%lld",&n);
printf("%lld",ara[n]);

}
