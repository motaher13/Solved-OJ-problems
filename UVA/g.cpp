#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n;
    char ch;
    map<string,int>mm;
    queue<string>q;
    for(i=97;i<=122;i++)
    {
        string str;
        ch=i;
        str=str+ch;
        q.push(str);

    }
    int c=0;
    while(!q.empty())
    {
        string s=q.front();
        q.pop();
        c++;
        mm[s]=c;
        l=s.size();
        i=s[l-1];
        for(j=i+1;j<=122;j++)
        {
            ch=j;
            string ss=s+ch;
            if(ss.size()<=5)
                q.push(ss);

        }
    }
    string s;
    while(getline(cin,s))
    {
        printf("%d\n",mm[s]);
    }
    return 0;








}
