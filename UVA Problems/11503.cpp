#include<bits/stdc++.h>
using namespace std;
int parent[100010]={0};
map<string,int>mm;
map<int,int>mf;
int find_par(int n)
{
    if(parent[n]==n)
        return n;
    return find_par(parent[n]);
}
int main()
{
    int i,j,k,l,m,n,t;
    //freopen("q.txt","w",stdout);
    string s,ss;
    scanf("%d",&t);
    while(t--)
    {
        mm.clear();
        mf.clear();
        memset(parent,0,sizeof parent);
        scanf("%d",&n);
        j=1;
        for(i=1;i<=n;i++)
        {
            cin>>s>>ss;
            if(mm[s]==0)
            {
                mm[s]=j;
                mf[j]=1;
                parent[j]=j;
                j++;
            }
            if(mm[ss]==0)
            {
                mm[ss]=j;
                mf[j]=1;
                parent[j]=j;
                j++;
            }
            int p1=find_par(mm[s]);
            int p2=find_par(mm[ss]);
            if(p1!=p2)
            {
                //printf("%d %d\n",p1,p2);
                parent[p2]=p1;
                mf[p1]=mf[p1]+mf[p2];
                mf[p2]=0;
                printf("%d\n",mf[p1]);
            }
            else
                printf("%d\n",mf[p1]);
        }

    }
    return 0;
}
