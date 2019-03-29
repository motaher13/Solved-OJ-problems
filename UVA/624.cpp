//sorry,ami vul code pathaisilam
#include<bits/stdc++.h>
using namespace std;
int ara[40],m,n;
vector<int>vc,store;
int visited[40]= {0};
int sum,mx;
void call(int x)

{
    int i,j;
    if(sum>mx && sum<=m)
    {

        store.clear();
        store=vc;
        mx=sum;

    }
    //if(c==n)return;
    if(sum>m)
        return;
    if(vc.size()==n)
        return;
    int l;

    for(i=x+1; i<n; i++)
    {
        if(visited[i]==0)
        {
            vc.push_back(ara[i]);
            visited[i]=1;
            if(sum+ara[i]<=m)
            {
                sum=sum+ara[i];
                call(i);
                sum=sum-ara[i];
            }
            visited[i]=0;

            vc.pop_back();
        }
    }
}

int main()
{
//­freopen("q.txt","w",s­tdout);
    int i,j,k,l;
    while(scanf("%d%d",&m,&n)==2)
    {
        sum=0,mx=0;
        vc.clear();
        store.clear();
        for(i=0; i<n; i++)
            scanf("%d",&ara[i]);

        call(-1);
        for(i=0; i<store.size(); i++)
            printf("%d ",store[i]);
        printf("sum:%d\n",mx);
    }
    return 0;
}
