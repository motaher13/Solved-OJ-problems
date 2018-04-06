#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l=0,r;
    double n,p,d;
    double c,pr;
    char ss[300],sss[300];
    char s[300];
    while(scanf("%lf %lf",&n,&p)==2)
    {
        l++;
        getchar();
        if(n==0 && p==0)
            break;
        for(i=0;i<n;i++)
            gets(s);
        c=0;
        for(i=0;i<p;i++)
        {
            gets(s);
            scanf("%lf %d",&d,&r);
            getchar();
                for(j=0;j<(int)r;j++)
                    gets(sss);
            if(i==0)
                pr=d;

            if(c<(r/n)){
                c=r/n;
                strcpy(ss,s);}
            else if(c==(r/n))
                    strcpy(ss,s);
        }
        if(l>1)
            printf("\n");
        printf("RFP #%d\n",l);
        printf("%s\n",ss);
    }
    return 0;
}
