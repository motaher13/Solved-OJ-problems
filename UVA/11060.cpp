#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n;
    char s[100],ss[100];
    int c=0;
    while(scanf("%d",&n)==1)
    {
        c++;
        map<string,int>mm;
        map<int,string>mi;
        map<int,int>mp;
        vector<int>vc[200];
        int v[200]={0};
        for(i=0;i<n;i++){
            scanf("%s",s);
            mm[s]=i;
            mi[i]=s;
            }
        scanf("%d",&m);
        for(i=0;i<m;i++)
        {
            scanf("%s %s",s,ss);
            vc[mm[s]].push_back(mm[ss]);
            mp[mm[ss]]++;
        }
        vector<int>out;
        for(i=0;i<n;i++)
        {
             map<int,int>nn;
            for(j=0;j<n;j++)
            {
                if(mp[j]==0 && v[j]==0 && nn[j]==0)
                {
                    v[j]=1;
                    out.push_back(j);
                    for(k=0;k<vc[j].size();k++)
                    {
                        mp[vc[j][k]]--;
                        nn[vc[j][k]]=1;
                    }
                }
            }
        }
        printf("Case #%d: Dilbert should drink beverages in this order: ",c);
        for(i=0;i<out.size()-1;i++)
            cout<<mi[out[i]]<<" ";
        cout<<mi[out[i]]<<"."<<endl<<endl;



    }
    return 0;
}
