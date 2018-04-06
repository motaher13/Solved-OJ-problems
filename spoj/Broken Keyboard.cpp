#include<bits/stdc++.h>
using namespace std;
string s;
int main()
{
    int i,j,k,l,n;
    while(scanf("%d",&n)==1)
    {
        if(n==0) break;
        map<char,int>m;
        getchar();
        getline(cin,s);
        l=s.size();
        k=0;
        int c=0,mx=0;
        for(i=0;i<l;i++)
        {
            if(m[s[i]]==0 && k<n)
            {
                k++;
                m[s[i]]++;
                c++;
            }
            else if(m[s[i]]!=0)
            {
                m[s[i]]++;
                c++;
            }
            else if(m[s[i]]==0 && k==n)
            {
                while(k==n)
                {
                    m[s[i-c]]--;
                    if(m[s[i-c]]==0)
                        k--;
                    c--;
                }
                k++;
                m[s[i]]++;
                c++;
            }
            if(c>mx) mx=c;
            //printf("%d %d\n",i,c);
        }
        printf("%d\n",mx);
    }
    return 0;
}
