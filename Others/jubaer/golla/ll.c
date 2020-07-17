#include <stdio.h>
#include <stdlib.h>
int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}

int main()
{
   int n,i,sum,k,l,m;
   scanf("%d",&n);

   int ara[10000];
   for(i=0;i<n;i++){
    scanf("%d",&ara[i]);
   }
   sum=0;
   k=0;

   qsort(ara+2, 4, sizeof(int), cmpfunc);
   for(i=0;i<6;i++)printf("%d",ara[i]);
  /* l=ara[0]+ara[1];
   ara[k+1]=l;
   sum=sum+l;
   printf("\n%d\n",sum);
   for(m=0;m<=k;m++){
    ara[m]=100000;
   }
   printf("\n%d\n ",sum);
   for(m=0;m<5;m++)printf("%d ",ara[m]);
   k++;
   }
   printf("%d  %d",sum,k);*/

   return(0);
}
