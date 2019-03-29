#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,l,m,n,h,o,a,b,p;
    double c,q[100];
    char s[500];
    scanf("%d",&p);
    while(p--)
    {
        scanf("%s",s);
        q[2]=0,q[7]=0,q[13]=0,q[14]=0;
        c=0,h=0,o=0,n=0,b=0;
        l=strlen(s);
        for(i=0;i<l;i++)
        {
            if(s[i]>64 && s[i]<91)
                {
                    b=s[i]-65;
                    q[b]=q[b]+1;
                }

            if(s[i+1]>48 && s[i+1]<58)
                for(j=i+2;j<=l;j++)
                    if((s[j]>64 && s[j]<91)|| s[j]=='\0')
                    {
                        for(k=0,m=i+1;m<j;m++)
                            k=10*k+s[m]-48;
                        q[b]=q[b]-1+k;
                        i=j-1;
                        break;
                    }
        }
        q[2]=q[2]*12.01;
        q[7]=q[7]*1.008;
        q[13]=q[13]*14.01;
        q[14]=q[14]*16.00;
        c=q[2]+q[7]+q[13]+q[14];
        printf("%0.3lf\n",c);

    }
    return 0;
}
