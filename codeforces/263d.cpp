#include<bits/stdc++.h>
using namespace std;
void dfs(int node);
int m,n,k,d=0;
vector<int>vc[100010],out;
int visited[100010]= {0};
int main()
{
    int i,j,t,l,a,b;
    scanf("%d %d %d",&n,&m,&k);
    for(i=0; i<m; i++)
    {
        scanf("%d %d",&a,&b);
        vc[a].push_back(b);
        vc[b].push_back(a);
    }
    out.push_back(1);
    dfs(1);
    return 0;

}
void dfs(int node)
{
    if(d==1)
        return;
    visited[node]=1;
    int j,u;
    for(int i=0; i<vc[node].size(); i++)
    {
        if(visited[vc[node][i]]==0)
        {
            out.push_back(vc[node][i]);
            dfs(vc[node][i]);
            out.pop_back();
        }

        else
            for(j=out.size()-1,u=1; j>=0; j--,u++)
                if(out[j]==vc[node][i])
                {
                    if(u>k)
                    {
                        printf("%d\n",u);
                        for(int y=out.size()-1; y>=j; y--)
                            printf("%d ",out[y]);
                        printf("\n");
                        d=1;

                    }
                    break;

                }
        if(d==1)
            return;


    }
    if(d==1)
            return;
}
