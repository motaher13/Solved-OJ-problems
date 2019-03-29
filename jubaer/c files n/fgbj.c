#include <stdio.h>
int ara[3000000];
void quicksort(int ara[],int p,int r);
int partition(int ara[],int p,int r);

int co;

void quicksort(int ara[],int p,int r){
    int q,i,j,n;

if(p<r){

   q=partition(ara,p,r);
   quicksort(ara,p,q-1);
   quicksort(ara,q+1,r);

}
}
int partition(int ara[],int p,int r){
   int x,t,i,j,l,g,h;
   x=ara[r];
  l=p-1;

   for(j=p;j<r;j++){
        h=j;

   if(ara[h]<=x){
   l++;
   i=h-1;
while(ara[h]<ara[i]){
        co++;
   t=ara[h];
   ara[h]=ara[i];
   ara[i]=t;
   h--;
   i=h-1;
   if(h==0)break;
   }
   }
   }
   l=l+1;
   for(g=r-1;g>=l;g--){
        if(ara[r]<ara[g]){
            co++;
   t=ara[r];
   ara[r]=ara[g];
   ara[g]=t;
        }
   }
   return l;

}

   int main()
   {
       int n,i,j,p,r;
       while(scanf("%d",&r)){
            if(r==0)break;
       i=1;
       p=i;
       co=0;
       for(i=1;i<=r;i++){
       scanf("%d",&ara[i]);
       }
       quicksort(ara,1,r);
          if(co%2==0)printf("Carlos\n");
       else printf("Marcelo\n");
   printf("\n%d\n",co);
       }
       return 0;
   }
