
#include<bits/stdc++.h>
using namespace std;
int ara[1010];
int check[1010][110];
int t,n,mx,m;
vector<int>store;
void fun(int i,int w,vector<int> vc)
{

    if(w>mx && w<=n)
    {
        mx=w;
        store.clear();
        store=vc;
    }
    if (i>=t) return;
    int j=0,k=0;
    fun(i+1,w,vc);
    vc.push_back(ara[i]);
    fun(i+1,ara[i]+w,vc);


}
int main()
{
    int i,j,k,l;
    while(scanf("%d %d",&n,&t)==2)
    {
        for(i=0; i<=n; i++)
            memset(check[i],-1,sizeof check[i]);
        for(i=0; i<t; i++)
            scanf("%d",&ara[i]);

        vector<int>vc;
        mx=0;
        fun(0,0,vc);
        for(i=0;i<store.size();i++)
            printf("%d ",store[i]);
        printf("sum:%d\n",mx);

    }
}
