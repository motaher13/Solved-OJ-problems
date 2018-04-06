#include <stdio.h>
int main()
{
    int i,j,ara[10][30][90],k,n,t,l,mat[10][30][90]=0;
    scanf("%d%d",&n,&t);
    for(i=0;i<n;i++){
            printf("mat");
    for(k=0;k<t;k++){
    for(l=0;l<t;l++){
    scanf("%d",&ara[i][k][l]);
    }
    }
    }
    printf("\n\n");
    for(i=0;i<n;i++){
        for(k=0;k<t;k++){
                for(l=0;l<t;l++){
       mat[i][k][l]=ara[i][k][l]+mat[i][k][l];
       printf("%d\t",mat[i][k][l]);
    }
    printf("\n");
    }
    printf("\n");
    }

}
