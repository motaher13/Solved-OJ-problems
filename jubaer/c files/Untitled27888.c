#include <stdio.h>
int main()
{
    int ara[56];
    int i,j,n,temp,k;
    while(scanf("%d",&n)!=EOF){
            for(i=0;i<n;i++)
            scanf("%d",&ara[i]);
    for(i=0;i<n-1;i++){
    for(j=i+1;j<n;j++){
    if(ara[i]>ara[j]){
    temp=ara[j];
    ara[j]=ara[i];
    ara[i]=temp;


    }



    }

    }


 for(i=0;i<n;i++)
    printf("%d",ara[i]);
    printf("\n");
    }
}
