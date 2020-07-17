#include<stdio.h>
int a[100][100],b[100][100];
int main()
{
    int i,j,k,l,m,n,s=0;

    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
            scanf("%d",&a[i][j]);

    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
            scanf("%d",&b[i][j]);

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            //a[i][j]=a[i][j]+b[i][j];
            s=s+a[i][j]*b[j][i];}
            a[i][j]=s;
            s=0;}



    for(i=0;i<2;i++){
        for(j=0;j<2;j++)
            printf("%d ",a[i][j]);
            printf("\n");
    }
}

