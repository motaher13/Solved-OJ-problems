#include<stdio.h>
int main()
{
    int i,j,m,n,k;
    scanf("%d",&n);
    for(i=(n/2)+1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(k=j;k<=i;k++)
        {
            printf("*");
        }
        printf("\n");
    }
   /* m=n/2;
    for(i=n-m;i>=1;i--)
    {
        for(j=1;j<=m-i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=n-j-j;k++)
        {
            printf("*");
        }
        printf("\n");
    }*/
    m=(n/2)+1;
    for(i=n-m;i>=1;i--)
    {
        for(j=1;j<=m-i;j++)
        {
            printf(" ");
        }
            j=j-1;
        for(k=1;k<=n-(j+j);k++)
            printf("*");
        printf("\n");
    }
}
