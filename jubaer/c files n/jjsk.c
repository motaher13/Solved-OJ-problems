#include <stdio.h>
int quicksort(int ara[],int p,int r,int m);
int partition(int ara[],int p,int r,int m);
//int ara[10000],r;
int ra=0,ja;

int quicksort(int ara[],int p,int r,int m){
    int q,i,j,n;

if(p<r){

   q=partition(ara,p,r,m);
   quicksort(ara,p,q-1,m);
    //for(i=1;i<=n;i++)printf("%d ",ara[i]);
    //printf("\n");
   quicksort(ara,q+1,r,m);
    //for(i=1;i<=n;i++)printf("%d ",ara[i]);

}
return m;
}
int partition(int ara[],int p,int r,int m){
   int x,t,i,j,u;
   if(ara[r]<ara[r-1]){
    t=ara[r];
    ara[r]=ara[r-1];
    ara[r-1]=t;
    ra++;
   }
   x=ara[r];
   i=p-1;

   for(j=p;j<r;j++){

   if(ara[j]<=x){
   i++;

   t=ara[j];
   ara[j]=ara[i];
   ara[i]=t;
   if((j-i)==1)ra++;

    printf(" %d\n ",ra);
   for(u=1;u<=ja;u++)printf("%d ", ara[u]);
   printf("\n");
   }
   }
   printf("\n%d\n ",ra);
   for(u=1;u<=ja;u++)printf("%d ", ara[u]);
   printf("\n");
   i=i+1;
   if((r-i)==1){
   t=ara[r];
   ara[r]=ara[i];
   ara[i]=t;
   if((r-i)==1)ra++;
    printf("\n%d\n ",ra);
   for(u=1;u<=ja;u++)printf("%d ", ara[u]);
   }
   return i;

}

   int main()
   {
       int n,ara[10000],i,j,p,r,f,h;
       scanf("%d",&r);
       ja=r;
       i=1;
       p=i;
       h=0;
       ra=0;
       for(i=1;i<=r;i++){
       scanf("%d",&ara[i]);
       }
      // ara[r+1]=0;
       quicksort(ara,1,r,h);
    // f=quicksort(ara,1,r,f);
      for(j=1;j<=r;j++)printf("%d ",ara[j]);
      printf("%d   \n",ra);

   }
