#include<bits/stdc++.h>
using namespace std;
int m,n,a,b,cnt;
vector<int>vc;
char c,d;
string s[30];
void dfs(int x,int y);
int main()
{
    //freopen("q.txt","w",stdout);
    int i,j,k,l,e=0;
    while(scanf("%d %d",&m,&n)==2)
    {
        e++;
        vc.clear();
        for(i=0; i<m; i++)
            cin>>s[i];
        scanf("%d %d",&a,&b);
        c=s[a][b];

        d=c+1;
        cnt=0;
        dfs(a,b);

        for(i=0; i<m; i++)
            for(j=0; j<n; j++)
                if(s[i][j]==c)
                {
                    cnt=0;
                    dfs(i,j);
                    vc.push_back(cnt);
                }

        sort(vc.begin(),vc.end());
        if(vc.size()==0)
            printf("0\n");

        else
        printf("%d\n",vc[vc.size()-1]);
    }
    return 0;
}

void dfs(int x,int y)
{
    if(x>=n || y>=n ||x<0 ||y<0) return;
    if(s[x][y]!=c) return;
    s[x][y]=d;
    cnt++;
    dfs(x,y+1);
    dfs(x,y-1);
    dfs(x+1,y);
    dfs(x-1,y);
}
