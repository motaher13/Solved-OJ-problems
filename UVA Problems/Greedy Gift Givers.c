#include<stdio.h>
int main()
{
    int i,j,k,l,n,p,m1,a,b;
    char g[10][15];
    char s[10][15];
    char s1[10][12];
    int m[11]={0,0,0,0,0,0,0,0,0,0,0};
    while(scanf("%d",&n)!=EOF)
    {
        for(j=0;j<n;j++)
            scanf("%s",g[j]);

        for(j=0;j<n;j++)
        {
            scanf("%s",s[j]);
            for(k=0;k<n;k++)
            {
                l=strcmp(s[j],g[k]);
                if(l==0)
                    break;
            }
            scanf("%d %d",&m1,&p);
            m[k]=m[k]-m1;
            b=m1/p;
            m[k]=m1-b+m[k];


            for(a=0;a<p;a++){
                scanf("%s",s1[a]);

                for(k=0;k<n;k++)
            {
                l=strcmp(s1[a],g[k]);
                if(l==0)
                    break;
            }
            m[k]=m[k]+b;
        }
    }
}
}
