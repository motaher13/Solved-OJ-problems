#include <stdio.h>
int ara[1000000],ara2[1000000];
char str[10000];
#include <stdio.h>
void quicksort(int ara[],int p,int r);
int partition(int ara[],int p,int r);
//int ara[10000],r;

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
   t=ara[j];
   ara[j]=ara[i];
   ara[i]=t;
   }
   }
   i=i+1;
   t=ara[r];
   ara[r]=ara[i];
   ara[i]=t;
   return i;

}

int main()
{
    int i,j,k,l;
}
