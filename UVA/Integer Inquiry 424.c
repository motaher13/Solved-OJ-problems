#include<stdio.h>
#include<string.h>
char s[10000][100000],w[10000];
int main()
{
    int i=0,j,k,l,m,n,p,q,r,a,b,c,d,lu,lv,l1,l2;

    while(scanf("%s",s[i])==1)
    {
        l=strlen(s[i]);
        if(l==1 && s[i][0]=='0')
            break;
        i++;
    }
    lv=i;

        for(q=0;q<lv-1;q++)
        {
            l1=strlen(s[q]);
            l2=strlen(s[q+1]);

            c=0,k=0;
            for(i=l1-1,j=l2-1; ;i--,j--)
            {
                a=s[q][i]-48;
                b=s[q+1][j]-48;
                if(i<0)
                    a=0;
                if(j<0)
                    b=0;
                if(i<0 && j<0 && c==0)
                    break;

                p=a+b+c;
                w[k]=p%10+48;
                k++;
                c=p/10;

                if(i<0 && j<0)
                    break;
            }
            for(i=0,j=k-1;j>=0;j--,i++)
                s[q+1][i]=w[j];
            s[q+1][i]='\0';

        }
        printf("%s\n",s[q]);

    return 0;
}




