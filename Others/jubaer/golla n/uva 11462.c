#include<stdio.h>
int ara[2100000];
int main()
{
    int i,j,k,n,l;

   while(scanf("%d",&n)){

        if(n==0)break;
        k=0;

    for(i=0;i<n;i++){
        scanf("%d",&ara[i]);
   if(k<ara[i])k=ara[i];
    }
    l=0;
    for(j=1;j<=k;j++){

        for(i=0;i<n;i++){
            if(j==ara[i]){
                printf("%d",ara[i]);
              if(l!=n-1)printf("%c",' ');
              l++;
            }
        }
    }
    printf("\n");
    }
    return 0;
}
