#include <stdio.h>

void quicksort(int ara[],int p,int r,int ara2[]);
int partition(int ara[],int p,int r,int ara2[]);
//int ara[10000],r;

void quicksort(int ara[],int p,int r,int ara2[]){
    int q,i,j,n;

if(p<r){

   q=partition(ara,p,r,ara2);
   quicksort(ara,p,q-1,ara2);
   quicksort(ara,q+1,r,ara2);


}
}
int partition(int ara[],int p,int r,int ara2[]){
   int x,t,i,j;
   x=ara[r];
   i=p-1;

   for(j=p;j<r;j++){

   if(ara[j]<=x){
   i++;
   if(ara[i]==ara[j]){
    if(ara2[i]%2==0&&ara2[j]%2==0){
        if(ara2[i]>ara2[j]){
            t=ara2[i];
            ara2[i]=ara2[j];
            ara2[j]=t;
        }
    }
   else if(ara2[i]%2!=0&&ara2[j]%2!=0){
       if(ara2[i]<ara2[j]){
         t=ara2[i];
            ara2[i]=ara2[j];
            ara2[j]=t;
       }
   }
   else if(ara2[i]%2==0&&ara2[j]%2!=0){
     t=ara2[i];
            ara2[i]=ara2[j];
            ara2[j]=t;
   }
   }
   else if(ara[i]!=ara[j]){
     t=ara2[i];
            ara2[i]=ara2[j];
            ara2[j]=t;
   }
   t=ara[j];
   ara[j]=ara[i];
   ara[i]=t;
   }
   }
   i=i+1;
   if(ara[i]==ara[r]){
    if(ara2[i]%2==0&&ara2[r]%2==0){
        if(ara2[i]>ara2[r]){
            t=ara2[i];
            ara2[i]=ara2[r];
            ara2[r]=t;
        }
    }
   else if(ara2[i]%2!=0&&ara2[r]%2!=0){
       if(ara2[i]<ara2[r]){
         t=ara2[i];
            ara2[i]=ara2[r];
            ara2[r]=t;
       }
   }
   else if(ara2[i]%2==0&&ara2[r]%2!=0){
     t=ara2[i];
            ara2[i]=ara2[r];
            ara2[r]=t;
   }
   }
   else if(ara[i]!=ara[r]){
     t=ara2[i];
            ara2[i]=ara2[j];
            ara2[j]=t;
   }
   t=ara[r];
   ara[r]=ara[i];
   ara[i]=t;
   return i;

}

   int main()
   {
       int n,ara[10000],i,j,p,r,ara2[10000],t;
       scanf("%d%d",&r,&t);
       i=1;
       p=i;
       for(i=1;i<=r;i++){
       scanf("%d",&ara2[i]);
       ara[i]=ara2[i]%t;
       }
       quicksort(ara,1,r,ara2);

      for(j=1;j<=r;j++)printf("%d ",ara2[j]);
      printf("\n");
      for(j=1;j<=r;j++)printf("%d ",ara[j]);
   }
