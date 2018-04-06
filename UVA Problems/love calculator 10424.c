#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,l,r,m,p,q,n=0,s=0,k,ara[2];
    float f;
    char str[2][30],str1[30];
    while(gets(str1))
    {
        strcpy(str[0],str1);
        gets(str[1]);
        for(i=0;i<2;i++)
        {
            l=strlen(str[i]);
            for(j=0;j<l;j++)
                if((str[i][j]>=65 && str[i][j]<=90)|| (str[i][j]>=97 && str[i][j]<=122))
                {
                    str[i][j]=toupper(str[i][j]);
                    n=n+(str[i][j]-64);
                }
                while(n>9)
                {
                    while(n>0)
                    {
                        k=n%10;
                        s=s+k;
                        n=n/10;
                    }
                        n=s;
                        s=0;
                }
                ara[i]=n;
                n=0;
        }

        if(ara[0]>ara[1])
        {
            ara[0]=ara[0]^ara[1];
            ara[1]=ara[1]^ara[0];
            ara[0]=ara[0]^ara[1];
        }
        if(ara[1]==0)
            continue;
        else
        {
            f=(float)ara[0]/ara[1]*100;
            printf("%.2f %%\n",f);
        }
    }
    return 0;
}
