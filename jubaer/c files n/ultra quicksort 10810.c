#include <stdio.h>
long long le[1000000],ri[1000000];
void merge(long long ara[],long long p,long long q,long long r);
void mergesort(long long ara[],long long p,long long r);
long long m;
void merge(long long ara[],long long p,long long q,long long r){
   long long n1,n2,i,j,k,u=0;
   n1=q-p+1;
   n2=r-q;
   for(i=1;i<=n1;i++){
   le[i]=ara[p+i-1];
   }
   for(j=1;j<=n2;j++){
   ri[j]=ara[q+j];
   }
   le[n1+1]=91321367689989;
   ri[n2+1]=93243477887889;
   i=1,j=1;
   for(k=p;k<=r;k++){
   if(le[i]<=ri[j]){
   ara[k]=le[i];
   i++;

   }
   else{
            ara[k]=ri[j];
            if(i<(n1+1))
       m=j+n1-i+m-u;
       u++;
   j++;
   }
   }

}
void mergesort(long long ara[],long long p,long long r){

if(p<r){
long long q=(p+r)/2;
mergesort(ara,p,q);
mergesort(ara,q+1,r);
merge(ara,p,q,r);

}
}
long long ara[1000000];
int main()
{
    long long i,j,k,l;
    long long n;
   while(scanf("%lld",&n)==1){
        if(n==0)break;
    m=0;
    for(i=1;i<=n;i++){
    scanf("%lld",&ara[i]);
    }
    mergesort(ara,1,n);

    if(m%2==0)printf("Carlos\n");
    else printf("Marcelo\n");
   }
   return 0;
}
