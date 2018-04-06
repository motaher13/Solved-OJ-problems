#include <stdio.h>
void quicksort(int ara[],int p,int r);
int partition(int ara[],int p,int r);
//int ara[10000],r;
int m;
void quicksort(int ara[],int p,int r){
    int q,i,j,n;

if(p<r){

   q=partition(ara,p,r);
   quicksort(ara,p,q-1);
    //for(i=1;i<=n;i++)printf("%d ",ara[i]);
    //printf("\n");
   quicksort(ara,q+1,r);
    //for(i=1;i<=n;i++)printf("%d ",ara[i]);

}
}
int partition(int ara[],int p,int r){
   int x,t,i,j;
   x=ara[r];
   i=p-1;

   for(j=p;j<r;j++){

   if(ara[j]<=x){
   i++;
   m=m+(j-i);
   t=ara[j];
   ara[j]=ara[i];
   ara[i]=t;
   }
   }
   i=i+1;
   m=m+(r-i);
   t=ara[r];
   ara[r]=ara[i];
   ara[i]=t;
   return i;

}

   int main()
   {
       int n,ara[10000],i,j,p,r;
       while(scanf("%d",&r)){
       i=1;
       p=i;
       m=0;
       for(i=1;i<=r;i++){
       scanf("%d",&ara[i]);
       }
       quicksort(ara,1,r);
printf("%d\n",m);
      //for(j=1;j<=r;j++)printf("%d ",ara[j]);
       }
   }
