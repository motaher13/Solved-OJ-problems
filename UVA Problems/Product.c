#include<stdio.h>
#include<string.h>
char s[1000][1000],w[10000];
int main()
{
    int i,j,k,l,m,n,p,q,r,a,b,c,d,lu,lv,l1,l2,ll;
    char u[1000],v[1000],rr[1000];
    while(scanf("%s %s",u,v)==2)
    {
        lu=strlen(u);
        lv=strlen(v);

        for(i=lv-1;i>=0;i--)
        {
            for(k=0;k<lv-1-i;k++)
                w[k]='0';

            a=v[i]-48;

            c=0;
            for(j=lu-1; ;j--)
            {
                b=u[j]-48;
                if(j<0)
                    b=0;

                if(j<0&&c==0)
                    break;

                p=a*b+c;
                w[k]=p%10+48;
                k++;
                c=p/10;

                if(j<0)
                    break;
            }
            q=k-1;

            for(j=0;j<k;j++){
                s[i][j]=w[q];
                q--;}
                s[i][j]='\0';
        }

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
        ll=strlen(s[q]);

        for(i=0;i<ll;i++)
        {
            if(s[q][i]!='0' || i==ll-1){
                for(j=i;j<ll;j++)
                    printf("%c",s[q][j]);
            break;}
        }
        printf("\n");

    }
    return 0;
}


