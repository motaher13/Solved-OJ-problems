#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,l,m,n,tm,a,b,c=0;
    char p[20][20],g[20],t[20][20];
    int pm[20];
    while(scanf("%d",&n)==1)
    {
        c++;
        for(i=0;i<n;i++)
            pm[i]=0;
        for(i=0;i<n;i++)
            scanf("%s",p[i]);
        for(i=0;i<n;i++)
        {
            scanf("%s %d %d",g,&m,&tm);
            for(j=0;j<tm;j++)
                scanf("%s",t[j]);
            if(m==0)
                continue;
            if(tm>0)
                a=m/tm;

            for(j=0;j<n;j++)
                if(strcmp(g,p[j])==0)
                {
                    if(tm==0)
                        pm[j]=pm[j];
                    else
                    pm[j]=pm[j]-tm*a;

                        break;
                }

            if(tm>0){
            for(k=0;k<tm;k++)
                for(j=0;j<n;j++)
                    if(strcmp(t[k],p[j])==0)
                        pm[j]=pm[j]+a;}

        }
        if(c>1)
            printf("\n");

        for(i=0;i<n;i++)
            printf("%s %d\n",p[i],pm[i]);

    }
    return 0;
}
