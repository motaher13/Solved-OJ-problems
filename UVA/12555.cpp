#include<bits/stdc++.h>
using namespace std;
char x[1000];
int main()
{
    int i,j,k,l,u;
    double m,n,p,q;
    double ara[20];
    string s;

    int t;
    scanf("%d",&t);
    getchar();

    for(int r=1;r<=t;r++)
    {
        getline(cin,s);
        l=s.size();
        stringstream ss(s);
        i=0;
        while(ss>>x)
        {
            if(isdigit(x[0])){
                sscanf(x,"%lf",&m);
                ara[i]=m;
                i++;}
        }
        n=0.5,p=0;
        for(j=0;j<i;j++)
        {
            p=p+ara[j]*n;
            n=n/10;
        }
        sprintf(x,"%lf",p);
        l=strlen(x);
        for(i=l-1;i>=0;i--)
        {
            if(x[i]>48 && x[i]<=57)
            break;
            else
                x[i]='\0';

        }
        printf("Case %d: %s\n",r,x);

    }
    return 0;
}
