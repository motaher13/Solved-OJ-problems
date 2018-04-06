#include<Stdio.h>
#include<string.h>
char f[10000][10000];
int main()
{
    long long i,j,l,l1,n,m,o,p,q;
    char k,c='\0',w[10000];

    f[0][0]='0';
    f[0][1]='\0';
    f[1][0]='1';
    f[1][1]='\0';

    while(scanf("%lld",&n)!=EOF)
    {
        for(i=2;i<n;i++)
        {
            l=f[i-1];
            l1=f[i-2];

            if(l>l1)
            {
                for(o=0;o<l-l1;o++)
                    w[o]='0';
                for(j=o,p=0;p<l1;j++,p++)
                    w[j]=f[i-2][p];
                strcpy(f[i-2],w);
                f[i-2][l]='\0';
            }

            for(j=l-1;j>=0;j--)
            {
                k=f[i-1][j]+f[i-2][j]+c-'0';
                //c='0';
                f[i][j+1]=((k-'0')%10)+'0';
                c=((k-'0')/10);
            }
                f[i][0]=c+'0';
                //f[i][l+1]='\0';
                printf("%s",f[i]);
                c='\0';

        }
    }
}
