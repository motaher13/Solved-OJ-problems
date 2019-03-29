#include<stdio.h>
int main()
{
    int i,j,k,l,m,n;
    //scanf("%d",&m);
    //getchar();
    //for(l=1;l<=m;l++)
    //{
        scanf("%d",&n);
        //getchar();
        int ara[n];
        for(i=0;i<n;i++)
            scanf("%d",&ara[i]);

        for(i=0;i<n;i++)
            printf("%d ",ara[i]);

        //if(n==1)
          //  continue;

        //else{
        for(i=0;i<=n;i++)
        for(j=0;j<n-i;j++)
            if(ara[j]<ara[j+1])
            {
                k=ara[j];
                ara[j]=ara[j+1];
                ara[j+1]=k;
            }
        for(i=0;i<n;i++)
            printf("%d ",ara[i]);
        //printf("Case %d: %d",l,ara[0]);
    //}
    return 0;
}
