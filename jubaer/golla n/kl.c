#include<stdio.h>
int ara[2100000];
int main()
{
    int i,j,k,n;

   while(scanf("%d",&n)){
        k=0;
        if(n==0)break;
    for(i=0;i<n;i++){
        scanf("%d",&ara[i]);
   if(k<ara[i])k=ara[i];
    }
    for(j=1;j<=k;j++){
        for(i=0;i<n;i++){
            if(j==ara[i])
                printf("%d%c",ara[i],' ');
        }
    }
    printf("\n");
    }
    return 0;
}
