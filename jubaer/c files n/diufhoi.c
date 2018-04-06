#include<stdio.h>
#include<string.h>
char s[10000][100000],w[10000];
int main()
{
    int i,j,k,l,m,n,p,q,r,a,b,c,d,lu,lv,ck=0;
    char u[100],v[100];
    while(scanf("%s%s",u,v)==2)
    {
        lu=strlen(u);
        lv=strlen(v);
        printf("%d %d\n",lv,lu);
        for(i=lv-1;i>=0;i--)
        {
            for(k=0;k<lv-1-i;k++)
                w[k]='0';
                printf("w=%c\n",w[k]);
            a=v[i]-48;
            printf("a=%d\n",a);
            c=0;
            for(j=lu-1; ;j--)
            {
                b=u[j]-48;
                if(j<0)
                    b=0;
                printf("b=%d ",b);
                if(c==0&&j<0){
                        printf("%d %d\n",j,c);
                         ck=1;
                    break;

                }
                if(ck==1)break;
                p=a*b+c;
                w[k]=p%10+48;
                printf("w=%c ",w[k]);
                k++;
                c=p/10;
                printf("c=%d \n",c);
                if(j<0)
                    break;
            }
            q=k;
            for(j=0;j<k;j++){
                s[lv-1][j]=w[q];
                q--;}
                s[lv-1][j]='\0';

            printf("%s",s[lv-1]);
        }
    }
}

