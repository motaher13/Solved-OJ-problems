#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k=0,m,n,l,p,q,g;
    char str[100000];
    int ara[300];
    scanf("%d",&q);
    getchar();
    while(q>0)
    {
        q--;
        k=0,p=0,g=0;
        gets(str);
        l=strlen(str);
        for(i=0;i<=l;i++)
        {
            if(str[i]==' ' || str[i]=='\0')
            {
                if(k>0){
                ara[p]=k;
                k=0,p++;}
                continue;
            }

            else
                k=10*k+(int)str[i]-48;

            if(k==0)
            {
                ara[p]=0;
                p++;
            }
        }

        for(i=0;i<p-1;i++)
            for(j=i+1;j<p;j++)
            {
                m=ara[i],n=ara[j];
                if(n==0||m==0){
                    if(n==0)
                        n=m;}
                else{
                if(n>m)
                {
                    n=n^m;
                    m=m^n;
                    n=n^m;
                }

                while(1)
                {
                    k=m%n;
                    if(k==0)
                        break;
                    m=n;
                    n=k;
                }}
                if(n>g)
                    g=n;
            }
        printf("%d\n",g);
    }
    return 0;
}
