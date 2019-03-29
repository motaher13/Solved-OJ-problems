#include <stdio.h>
int quicksort(int ara[],int p,int r,int ho);
int partition(int ara[],int p,int r,int ho);
int m,co;
//int ara[10000],r;

int quicksort(int ara[],int p,int r,int ho){
    int q,i,j,n;

if(p<r){

   q=partition(ara,p,r,ho);
   quicksort(ara,p,q-1,ho);
    //for(i=1;i<=n;i++)printf("%d ",ara[i]);
    //printf("\n");
   quicksort(ara,q+1,r,ho);
    //for(i=1;i<=n;i++)printf("%d ",ara[i]);

}
return m;
}
int partition(int ara[],int p,int r,int ho){
   int x,t,i,j,u;
   x=ara[r];
   i=p-1;

   for(j=p;j<r;j++){

   if(ara[j]<=x){
   i++;
   t=ara[j];
   ara[j]=ara[i];
   ara[i]=t;
   if((j-i)==1)m++;
  // for(u=1;u<=co;u++)printf("%d ",ara[u]);
   printf("\n%d\n",m);
   }
   }
   i=i+1;
   t=ara[r];
   ara[r]=ara[i];
   ara[i]=t;
   if(r-i==1)m++;
    //for(u=1;u<=co;u++)printf("%d ",ara[u]);
   printf("\n%d\n",m);
   return i;

}

   int main()
   {
       int n,ara[10000],i,j,p,r;
      while(scanf("%d",&co)){
            m=0;
       int ho=0;
       i=1;
       p=i;
       for(i=1;i<=co;i++){
       scanf("%d",&ara[i]);
       }
       quicksort(ara,1,co,ho);
       m= quicksort(ara,1,co,ho);
     printf("%d\n",m);
     // for(j=1;j<=r;j++)printf("%d ",ara[j]);
      }
   }
