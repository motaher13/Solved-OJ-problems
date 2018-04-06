#include<bits/stdc++.h>
using namespace std;
vector<char>vc;
int main()
{
    int i,j,k,l,m,n,t;
    string s;
    scanf("%d",&t);
    for(int cs=1;cs<=t;cs++)
    {
        cin>>s;
        vc.clear();
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='0'&& vc[vc.size()-1]=='0' &&vc[vc.size()-2]=='1')
            {
                vc.pop_back();
                vc.pop_back();
            }
            else
                vc.push_back(s[i]);
        }
        if(vc.size()==0)
            printf("Case %d: yes\n",cs);
        else
            printf("Case %d: no\n",cs);
    }
    return 0;
}
