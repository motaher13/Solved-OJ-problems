#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l;
    char s[100];
    stack<char>p;
    gets(s);
    l=strlen(s);
    for(i=0; i<l; i++)
    {
        if(s[i]>=48 && s[i]<=57)
            printf("%c",s[i]);
        else
        {
            if(s[i]=='+' || s[i]=='-')
                while(p.size()!=0 && p.top()!='(')
                {
                    printf("%c",p.top());
                    p.pop();
                }
            if(s[i]=='*' || s[i]=='/')
                while(!p.empty() && p.top()!='(' && p.top()!='+' && p.top()!='-')
                {
                    printf("%c",p.top());
                    p.pop();
                }

            if(s[i]==')'){
                while(p.top()!='(')
            {
                printf("%c",p.top());
                p.pop();
            }
            p.pop();}

            else
                p.push(s[i]);

        }

        if(i==l-1)
            while(!p.empty())
            {
                printf("%c",p.top());
                p.pop();
            }
    }

}
