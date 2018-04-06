#include <stdio.h>
int main()
{
    int i,j,k,n,l,m,q;
   scanf("%d",&n);
    for(i=n;i>=0;i=i-2){
        for(j=i;j>0;j--){

            printf("c");
        }
        printf("\n");
       if(i==n){
            printf(" ");
       }
        else if(1){
        for(k=0;k<n-i;k++){

            printf(" ");

        }


        }
    }
    for(l=1;l<=n;l=l+2){

        //printf("\n");
        for(q=n-1;q>=0;q--){
                if(l==n)break;
            printf(" ");
            if(q==l)break;
        }
          for(m=0;m<=l;m++){
            printf("c");
        }
        printf("\n");
    }


}
