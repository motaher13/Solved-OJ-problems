#include<stdio.h>
int main()
{
    int i,j,k,l=0,m,n;
    while(scanf("%d",&n)!=EOF)
    {
        l=0;
        int ara[n];
        for(i=0;i<n;i++)
        scanf("%d",&ara[i]);

        for(i=0;i<n;i++)
        {
            for(j=0;j<n-i;j++)
            {
                if(ara[j]>ara[j+1])
                {
                    k=ara[j];
                    ara[j]=ara[j+1];
                    ara[j+1]=k;
                    l++;
                }
            }

        }
        printf("Minimum exchange operations : %d\n",l);
        l=0;
    }
    return 0;
}
