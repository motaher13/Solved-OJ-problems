#include <stdio.h>
#include <stdlib.h>
  int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}
int main()
{
    int i,j,k,l,m;
    int ara[]={4,2,9,-1,5,9,0,34,2,1,4,6,3,5};
   qsort(ara,14,sizeof(int),cmpfunc);
   for(i=0;i<14;i++)printf("%d ",ara[i]);








}
