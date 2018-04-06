#include <stdio.h>
#include <stdlib.h>
int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}

int main()
{
    int i,j,k,ara[10000],n,sum,t,l,f,d;
    while(scanf("%d",&n)==1){
            if(n==0)break;
    for(i=0;i<n;i++){
        scanf("%d",&ara[i]);
    }
    sum=0;
    k=0;
    while(k!=n-1){
 qsort(ara+k,n-k , sizeof(int), cmpfunc);
    l=ara[k]+ara[k+1];
    ara[k+1]=l;
    sum=sum+l;
    k++;
    }
    printf("%d\n",sum) ;
    }
    return 0;
}
