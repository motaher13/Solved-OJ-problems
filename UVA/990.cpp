#include<bits/stdc++.h>
using namespace std;
int n,t,mx,ara[100000][4];
vector<int>vec;
void call(int tm,int m,int i,vector<int>vc);

int main()
{
    int i,j,k=0,l,w;
    while(scanf("%d %d",&t,&w)==2)
    {
        k++;
        scanf("%d",&n);
        mx=0;
        for(i=0;i<n;i++)
        {
            scanf("%d %d",&ara[i][2],&ara[i][1]);
            ara[i][0]=ara[i][2]*w+ara[i][2]*w*2;
        }
        vector<int>vc;

        call(0,0,0,vc);
        if(k>1)
            printf("\n");
        printf("%d\n%d\n",mx,vec.size());

        for(i=0;i<vec.size();i++)
            printf("%d %d\n",ara[vec[i]][2],ara[vec[i]][1]);

    }
    return 0;
}
void call(int tm,int m,int i,vector<int>vc)
{
    if(tm>t) return;
    if(i>n) return;
    if(m>mx)
    {
        mx=m;
        vec=vc;
    }
    if(tm+ara[i][0]<=t)
    {
        vc.push_back(i);
        call(tm+ara[i][0],m+ara[i][1],i+1,vc);
        vc.pop_back();
    }
    call(tm,m,i+1,vc);
}
