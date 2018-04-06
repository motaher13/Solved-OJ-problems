#include<stdio.h>
int main()
{
    int i,j,k,l,m,n,p,q;
    int ara[500][500];
    while(scanf("%d %d",&n,&m)==2)
    {
        for(i=0;i<n;i++)
            for(j=0;j<m;j++)
                scanf("%d",&ara[i][j]);

        q=0;
        for(i=0;i<n;i++)
        {
            p=0;
            for(j=0;j<m;j++)
            {
                if(ara[i][j]>0)
                    p++;
            }
            if(p==m)
                q++;
        }
        printf("%d\n",q);

    }
    return 0;
}
