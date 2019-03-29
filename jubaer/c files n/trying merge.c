#include <stdio.h>
void merge(int ara[],int p,int q,int r);
void mergesort(int ara[],int p,int r);
int m;
void merge(int ara[],int p,int q,int r){
   int n1,n2,le[10000],ri[10000],i,j,k,u=0;
   n1=q-p+1;
   n2=r-q;
   for(i=1;i<=n1;i++){
   le[i]=ara[p+i-1];
   }
   for(j=1;j<=n2;j++){
   ri[j]=ara[q+j];
   }
   le[n1+1]=213213;
   ri[n2+1]=232434;
   i=1,j=1;
   for(k=p;k<=r;k++){
   if(le[i]<=ri[j]){
  // u=0;
   ara[k]=le[i];
   i++;

   }
   else{
            ara[k]=ri[j];
            if(i<(n1+1))
       m=j+n1-i+m-u;
       u++;


 // for(k=1;k<=r;k++)printf("%d ",ara[k]);
   j++;

   }
  // printf("\n%d\n",m);
    //for(k=1;k<=r;k++)printf("%d ",ara[k]);
   }

}
void mergesort(int ara[],int p,int r){

if(p<r){
int q=(p+r)/2;
mergesort(ara,p,q);
mergesort(ara,q+1,r);
merge(ara,p,q,r);
// printf("\n%d\n",m);
  //  for(k=1;k<=r;k++)printf("%d ",ara[k]);
}
}
int main()
{
    int i,j,k,l;
    int n,ara[1000];
   while(scanf("%d",&n)){
    m=0;
    for(i=1;i<=n;i++){
    scanf("%d",&ara[i]);
    }
    mergesort(ara,1,n);
    // printf("\n");
     for(i=1;i<=n;i++){

    printf("%d ",ara[i]);
    }
     printf("%d\n",m);
   }
}
