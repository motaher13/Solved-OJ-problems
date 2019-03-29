#include<stdio.h>
int ara[100000],b[100000];
int main()
{
    int i,j,k,l=0,m,n,t,q,c;
    while(scanf("%d %d",&n,&q)==2)
    {
        l++;
        if(n==0 && q==0)
            break;
        for(i=0;i<n;i++)
            scanf("%d",&ara[i]);
        for(i=0;i<q;i++)
            scanf("%d",&b[i]);

        for(i=0;i<n-1;i++)
            for(j=i+1;j<n;j++)
                if(ara[i]>ara[j])
                {
                    m=ara[i];
                    ara[i]=ara[j];
                    ara[j]=m;
                }
        printf("CASE# %d:\n",l);
        for(i=0;i<q;i++)
        {
            c=0;
            for(j=0;j<n;j++)
            {
                if(ara[j]==b[i]){
                    printf("%d found at %d\n",b[i],j+1);
                    c=1;
                    break;}
            }
            if(c==0)
                printf("%d not found\n",b[i]);
        }

    }
    return 0;
}
