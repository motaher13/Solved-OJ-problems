#include <stdio.h>
int main()
{
    int ara[1000];
    long long i,j,k,l,b,m,u,n,mul,cou;
    long long p;
   while(scanf("%lld %lld %lld",&n,&p,&m)==3){
 //  for(cou=2;cou<62745;cou++){
       // n=cou;
        //p=62745;
   //m=62745;
    u=0;
    for(i=0;p!=0;i++){
    if(p%2==0&&i==0){
    n=n%m;
    p=p/2;
    }
    else if(i==0&&p%2!=0){
    ara[u]=n%m;
    n=n%m;
    p=p/2;
    u++;
    }
    else if(p%2==0){
    n=(n*n)%m;
    p=p/2;
    }
    else if(p%2!=0){
    ara[u]=(n*n)%m;
    n=(n*n)%m;
    p=p/2;
    u++;
    }

    }
    mul=1;
    for(l=0;l<u;l++){
        mul=mul*ara[l];
        mul=mul%m;
    }
    //if(mul==cou)printf("%d ",cou);
   printf("%lld\n",mul);
   }
   return 0;
}
