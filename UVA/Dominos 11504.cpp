#include<bits/stdc++.h>
using namespace std;
vector<int>v[200000];
int ara[200000];
int f[200000];
void dfs(int n)
{
    int i;
    if(ara[n]==1) return;
    ara[n]=1;
    for(i=0;i<v[n].size();i++){
        int j=v[n][i];
            dfs(j);}
}
int main()
{
    int i,j,k,l,m,a,t,b,r,c;
    FILE *p;
    p=fopen("out.txt","w");
    scanf("%d",&t);
    while(t--)
    {
        int w=0;
        memset(f,0,200000);
        int cnt=0;
        scanf("%d %d",&a,&b);
        for(i=0; i<b; i++)
        {
            scanf("%d %d",&r,&c);
            v[r].push_back(c);
            if(f[r]==0)
                w++;
            if(f[c]==0)
                w++;
            f[r]=1;
            f[c]=1;

            //v[c].push_back(r);
        }
        memset(ara,0,140000);
        for(i=1; i<=a; i++)
            if(f[i]==1 && ara[i]==0)
            {
                dfs(i);
                cnt++;
            }
            fprintf(p,"%d\n",a-w+cnt);
            printf("%d\n",a-w+cnt);
    }
    fclose(p);
}
