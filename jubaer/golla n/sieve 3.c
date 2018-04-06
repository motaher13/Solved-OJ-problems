#include <stdio.h>
#define li 10000000
#define p 100000
int ara[p];
int ara2[li];
int main()
{
   int i,j,k,l;
   for(i=0;i<li;i++){
   ara2[i]=i+2;
   }
   k=0;
   for(i=0;i<li;i++){
   if(ara2[i]!=-1){
   ara[k]=ara2[i];
   k++;
   for(j=(2*ara2[i]-2);j<li;j=j+ara2[i]){
   ara2[j]=-1;
   }
   }
   }
   for(l=0;l<k;l++)printf("%d ",ara[l]);
   printf("\n%d",k);
}
