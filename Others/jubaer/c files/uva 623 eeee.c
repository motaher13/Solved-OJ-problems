#include <stdio.h>
#include <string.h>
int main()
{
    char str[10000],str2[500];
    int i,j,k,l,r,t,n,m,p,q,s,x,y,z,ck,fact,du,a,b,u,w,d,ka;
    int ara[100][1000];
    while(scanf("%d",&du)==1)
    {

        printf("%d!\n",du);
        fact=du-1;
        a=du;
        b=du-1;
        w=0;
        for(u=fact; u>0; u--)
        {
            if(w==0)
            {
                sprintf(str,"%d",a);
                sprintf(str2,"%d",b);
            }
            else if(w>0)
            {
                sprintf(str2,"%d",u);
            }
            l=strlen(str2);
            n=strlen(str);
            for(i=0,k=l; i<l; i++,k--)
            {
                m=(int)str2[i]-48;
                t=0;
                for(j=0; j<k-1; j++)
                {
                    ara[i][j]=0;
                    t++;
                }
                if(i==0)s=t;
                q=0;
                for(r=n-1,j=k-1; j<=n+s; j++,r--)
                {
                    if(j==n+t)p=q;
                    else if(j>n+t)p=0;
                    else
                        p=m*((int)str[r]-48)+q;
                    ara[i][j]=p%10;
                    q=p/10;
                }
            }
            x=0;
            for(j=0,d=n+s; j<=n+s; j++,d--)
            {
                for(i=0; i<l; i++)
                {
                    x=x+ara[i][j];
                }
                str[d]=(char)x%10+'0';
                if(j<n+s)
                    x=x/10;
            }
            str[n+s+1]='\0';
            w++;
        }
        ck=0;
        if(du==0||du==1)printf("1");
        else
        {
            for(k=0; k<strlen(str); k++)
            {
                if(str[k]!='0')ck=1;
                if(ck==1)printf("%c",str[k]);
            }
        }
        printf("\n");
    }
    return 0;
}

