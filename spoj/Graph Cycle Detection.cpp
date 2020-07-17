#include<bits/stdc++.h>
using namespace std;
void dfs(int node,int pre);
int m,n,k=0,d=0,b=0;
vector<int>vc[200],st,out;
vector<string>ss;
int visited[200]= {0};

int main()
{
    int i,j,k,l,m,n;
    string s;
    while(cin>>s)
    {
        vc[s[0]].push_back(s[2]);
        st.push_back(s[0]);
    }
    sort(st.begin(),st.end());
//    for(i=0;i<st.size();i++)
//        printf("%c ",st[i]);
//    printf("\n");
    for(i=0; i<1; i++)
    {
        memset(visited,0,sizeof(visited));
        out.push_back(st[i]);
        n=st[i];
        dfs(n,0);
    }
    sort(ss.begin(),ss.end());
    cout<<ss[0]<<endl;
    return 0;
}

void dfs(int node,int pre)
{

    visited[node]=1;
    int j,u;
    for(int i=0; i<vc[node].size(); i++)
    {
        if(visited[vc[node][i]]==0)
        {
            out.push_back(vc[node][i]);

            dfs(vc[node][i],node);
            out.pop_back();
        }

        else
            for(j=out.size()-1,u=1; j>=0; j--,u++)
                if(out[j]==vc[node][i] && vc[node][i]!=pre)
                {
                    string s="";
                    for(int y=j; y<out.size(); y++)
                    {
                        char c=out[y];
                        s=s+c;
                    }
                    ss.push_back(s);
                    //cout<<ss[0]<<endl;
                    break;
                }
    }
}
//for(int y=j; y<out.size(); y++)
//                        printf("%c",out[y]);
//                    printf("\n");
//                    //b=1;
