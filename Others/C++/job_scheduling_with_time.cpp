
#include<bits/stdc++.h>
using namespace std;

vector<int>vc[100];
int given[100],root[100]={0},val[100]={0},in[100]={0};
queue<int>q;
int main()
{
    int i,j,k,l,m,n,w,mx=0;
    for(i=1;i<=6;i++)
        scanf("%d %d",&n,&w),given[n]=w;
    for(i=1;i<=7;i++)
    {
        scanf("%d %d",&n,&m);
        vc[m].push_back(n);
        root[n]=1;
        in[n]++;
    }


    for(i=1;i<=6;i++)
        if(root[i]==0)
            q.push(i);

    while(!q.empty())
    {
        int v=q.front();
        q.pop();
        val[v]+=given[v];
        for(i=0;i<vc[v].size();i++)
        {
            w=vc[v][i];
            val[w]=max(val[w],val[v]);
            in[w]--;
            if(in[w]==0)
                q.push(w);
        }
    }

    for(i=1;i<=6;i++)
        mx=max(mx,val[i]);
    printf("%d\n",mx);
}

//input
//node,time
/*1 5
2 3
4 2
3 2
6 2
5 4
//child,parent
2 1
4 1
3 2
6 3
6 5
5 4
5 3*/
