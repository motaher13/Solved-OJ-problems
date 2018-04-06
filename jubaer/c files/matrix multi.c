#include <stdio.h>
int main()
{
    int ara1[90][90],ara2[90][90],ara3[90][90],i,j,k,n1,n2,n3,n4,t,r;
    scanf("%d%d",&n1,&n2);
    printf("first matrix\n");
    for(i=0;i<n1;i++){
    for(j=0;j<n2;j++){
    scanf("%d",&ara1[i][j]);
    }
    }
    scanf("%d%d",&n3,&n4);
    printf("second matrix\n");
    for(i=0;i<n3;i++){
    for(j=0;j<n4;j++){
    scanf("%d",&ara2[i][j]);
    }
    }
     for(i=0;i<n1;i++){

     for(j=0;j<n4;j++){
     t=0;
     for(k=0;k<n2;k++){
     t=t+ara1[i][k]*ara2[k][j];
     }
     ara3[i][j]=t;
     }
     }
     printf("\n\n");
        for(i=0;i<n1;i++){
     for(r=0;r<n4;r++){
     printf("%d ",ara3[i][r]);
}
printf("\n");
}
return 0;
}
