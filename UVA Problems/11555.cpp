#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,n,t;
    double a,b,m;
    char s[100],ss[1000];
    scanf("%d",&t);
    getchar();
    for(i=1;i<=t;i++)
    {
        gets(s);
        l=strlen(s);
        if(l==8)
        {
            a=10;
            b=s[5]-48;
            m=a*0.5+b*0.05;
        }
        if(l==7)
        {
            a=s[0]-48;
            b=s[4]-48;
            m=a*0.5+b*0.05;
        }
        if(l==4)
        {
            a=10;
            m=a*0.5;
        }
        if(l==3)
        {
            a=s[0]-48;
            m=a*0.5;
        }
        sprintf(ss,"%lf",m);
        l=strlen(ss);
        for(j=l;j>1;j--)
            if(ss[j-1]!='0')
            {
                ss[j]='\0';
                break;
            }
        l=strlen(ss);
        if(ss[l-1]=='.')
            ss[l-1]='\0';


        printf("Case %d: %s\n",i,ss);
    }
    return 0;
}
