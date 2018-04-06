#include <stdio.h>
int main()
{
    int i,j,k,ara[10000],n,sum,t,l,f;
    while(scanf("%d",&n)){
            if(n==0)break;
    for(i=0;i<n;i++){
        scanf("%d",&ara[i]);
    }
    sum=0;
    k=0;
    while(k!=n-1){


    for(i=k;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(ara[i]>ara[j]){
                t=ara[i];
                ara[i]=ara[j];
                ara[j]=t;
            }

        }

    }

   printf("\n");
    l=ara[k]+ara[k+1];
    ara[k+1]=l;
    sum=sum+l;
    printf("/n%d",sum);
     for(f=0;f<n;f++)printf("%d ",ara[f]);
    k++;
    }
    printf("%d\n",sum) ;
    }
    return 0;
}
