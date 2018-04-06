#include <stdio.h>
int main()
{
    int i,j,k,l,r,n;
    scanf("%d",&n);
    r=0;
    for(i=1;i<=n;i++){
              for(j=0;j<i;j++){
            printf("*");

        }

    for(j=0;j<(n*2)-(i*2);j++){
    printf(" ");
    }
    for(k=0;k<i;k++){
    printf("*");
    }
    printf("\n");

    }
   //* for(i=1;i<=9;i=i+1){
       /* for(j=0;j<i;j++){
            printf("*");

        }
        r++;
        printf("\n");

    }*/
}
