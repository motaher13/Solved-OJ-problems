#include <stdio.h>
#include <math.h>
void ip(long long p,long long ara[]){
   int i,j,n,t,k,r,s,l,q,h;
   double d;
    for(i=0;i<p;i++){
    scanf("%lld",&ara[i]);
    }
     l=0;
    s=0;
      for(i=0;i<p-1;i++){
     for(j=i+1;j<p;j++){
            l++;
     n=ara[i];
     t=ara[j];


    while(t!=0){
        h=t;
        t=n%t;
        n=h;
    }
    if(n==1)s++;
     }
     }
     if(s==0)printf("No estimate for this data set.\n");
     else{
    d=(double)6/s;
    printf("%.6lf\n",sqrt(d*l));
     }
}
int main()
{
    long long p;
    long long ara[10000];
while(scanf("%lld",&p)){
    if(p==0)break;
            ip(p,ara);
}


    return 0;
}
