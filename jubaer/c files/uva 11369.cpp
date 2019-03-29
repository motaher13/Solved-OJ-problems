#include <stdio.h>
#include <stdlib.h>
int ara[1000000];
int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)b - *(int*)a );
}

int main()
{
    int i,j,k,n,t,l,f,d;
    long long sum;
    scanf("%d",&t);
    while(t--){
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&ara[i]);
    }

 qsort(ara,n,sizeof(int),cmpfunc);
 sum=0;
 for(i=2;i<n;i=i+3){
    sum=sum+ara[i];
 }
 printf("%lld\n",sum);
    }
    return 0;
    }
