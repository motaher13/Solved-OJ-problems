#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,p,q;
    string s;
    cin>>s;
    l=s.size();
    for(i=0;i<l;i++)
        if(s[i]=='e')
            break;
    p=i;
    n=0;
    for(i=p+1;i<l;i++)
    {
        n=n*10+s[i]-48;

    }
    int b=0;
    for(i=0;i<p;i++)
    {
        if(s[i]=='.')
            break;
        if(s[i]=='0' && b==0)
            continue;
        else
        {
            b=1;
            printf("%c",s[i]);
        }

    }
    q=i+1;
    for(i=0;i<n;i++)
    {
        b=1;
        if(i+q<p)
            printf("%c",s[q+i]);
        else
            printf("0");

    }
    if((i+q)<(p))
    {
        if(b==1)
            printf(".");
        else
            printf("0.");
    }

    while(i+q<p)
    {
        printf("%c",s[i+q]);
        i++;
    }

    return 0;

}
