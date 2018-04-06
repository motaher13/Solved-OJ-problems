#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n;
    char s[100];
    gets(s);
    l=strlen(s);
    stack<char>p;
    for(i=0;i<l;i++)
    {
        if(s[i]>=48 && s[i]<=57)
            p.push(s[i]);
        else
        {
            int v=p.top()-48;
            p.pop();
            int u=p.top()-48;
            p.pop();
            int c;
            if(s[i]=='+')
                c=u+v;
            if(s[i]=='-')
                c=u-v;
            if(s[i]=='*')
                c=u*v;
            if(s[i]=='/')
                c=u/v;
            p.push(c+48);

        }
    }
    printf("%c",p.top());
}
