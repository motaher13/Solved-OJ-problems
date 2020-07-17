#include <stdio.h>
int main()
{
    int ara[20],i,j,n,max=0,dif[20];
   while(scanf("%d",&n)!=EOF){
        max=0;
    for(i=0;i<n;i++){
    scanf("%d",&ara[i]);

    }
    for(i=0;i<n;i++){
    for(j=0;j<n;j++){
    dif[j]=ara[i]-ara[j];
    if(dif[j]>max){
    max=dif[j];
    }
   // printf("%d\t",max);
    //printf("\t");
    }

    printf("\n");
    }
    printf("%d",max);
    printf("\n\n");
   }

}
