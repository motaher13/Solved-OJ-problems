#include<bits/stdc++.h>
using namespace std;
int e=0,b[100];
void bfs(int n,int l,int p)
{
    if(b[p]>)
}
int main()
{
    int i,j,k,l,m,n,r,c,p,q;
    int a[100][10];
    while(scanf("%d",&n)==1)
    {
        if(n==0)
        break;
        q=0;
        memset(b,0,99);
        while(n--)
        {
            scanf("%d %d",&r,&c);
            if(b[r]==0){
                q++;
                b[r]=1;}
            if(b[c]==0){
                q++;
                b[c]=1;}
            v[r].push_back(c);
            v[c].push_back(r);
        }
        p=0;
        while(scanf("%d %d",&a[p][0],&a[p][1])==2)
        {
            if(a[p][0]==0 && a[p][1]==0)
                break;
            p++;
        }
        for(i=0,i<p;i++)
        {
            e=0;
            memset(b,0,99);
            dfs(a[i][0],a[i][1],a[i][0]);
            printf("%d\n",q-b);
        }
    }
}

