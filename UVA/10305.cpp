#include<bits/stdc++.h>
using namespace std;
vector<int>vc[150],out;
map<int,int>mm;
int n,m;
void dfs(int i);
int main()
{
    //freopen("q.txt","w",stdout);
    int i,j,k,l,p,q;
    while(scanf("%d %d",&n,&m)==2)
    {
        if(n==0 && m==0)
            break;
        int v[150]={0};
        mm.clear();
        out.clear();
        for(i=0;i<=n;i++)
            vc[i].clear();

        for(i=0;i<m;i++)
        {
            scanf("%d %d",&p,&q);
            vc[p].push_back(q);
            mm[q]++;
        }
        for(i=0;i<n;i++)
        {
            map<int,int>nn;
            for(j=1;j<=n;j++)
            {
                if(mm[j]==0 &&v[j]==0 && nn[j]==0)
                {
                    out.push_back(j);
                    v[j]=1;
                    for(k=0;k<vc[j].size();k++){
                        mm[vc[j][k]]--;
                        nn[vc[j][k]]=1;}
                }
            }
        }
        for(i=0;i<out.size()-1;i++)
            printf("%d ",out[i]);
        printf("%d\n",out[i]);


    }
    return 0;
}
















