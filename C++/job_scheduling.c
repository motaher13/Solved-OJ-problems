//10305
#include<stdio.h>
int ara[150][150];
int main()
{
    int i,j,k,l,p,q,a,b,n,m;
    while(scanf("%d %d",&n,&m)==2)
    {
        if(n==0 && m==0)
            break;
        int dependancy[200]={0},done[200]={0},out[200]={0};
        l=0;

        for(i=0;i<=n;i++)
            memset(ara[i],0,n);

        for(i=0;i<m;i++)
        {
            scanf("%d %d",&a,&b);
            ara[a][b]=1;
            dependancy[b]++;

        }

        for(i=1;i<=n;i++)
        {
            int this_loop[200]={0};
            for(j=1;j<=n;j++)
            {
                if(dependancy[j]==0 && done[j]==0 && this_loop[j]==0)
                {
                    done[j]=1;
                    out[l]=j,l++;

                    for(k=1;k<=n;k++)
                    {
//                        printf("%d %d %d\n",i,j,k);
                        if(ara[j][k]==1)
                        {
                            dependancy[k]--;
                            this_loop[k]=1;
                        }
                    }
                }
            }
        }

        for(i=0;i<l;i++)
            printf("%d ",out[i]);
        printf("\n");


    }
    return 0;

}
