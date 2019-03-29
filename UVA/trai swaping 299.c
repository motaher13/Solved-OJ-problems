#include<stdio.h>
int ara[5000000];
int main()
{
    int i,j,k,l=0,m,n;
    scanf("%d",&m);
    while(m>0)
    {
        m--;
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&ara[i]);

        for(i=0;i<n;i++)
            for(j=0;j<n-i;j++)
                if(ara[j]>ara[j+1] && j<n-1)
                {
                    k=ara[j];
                    ara[j]=ara[j+1];
                    ara[j+1]=k;
                    l++;
                }

        printf("Optimal train swapping takes %d swaps.\n",l);
        l=0;
    }
    return 0;
}

