#include<bits/stdc++.h>
using namespace std;
int ara[20],n;
vector<int>vc;
int visited[20]= {0};
void call();
int main()
{
    int i,j,k,l;
    while(scanf("%d",&n)==1)
    {
        vc.clear();
        for(i=0; i<n; i++)
            scanf("%d",&ara[i]);
        call();
    }

}
void call()
{
    int i,j;

    if(vc.size()==n)
    {
        for(i=0; i<n; i++)
            printf("%d",vc[i]);
        printf("\n");
        return;
    }

    for(i=0; i<n; i++)
    {
        if(visited[i]==0)
        {
            vc.push_back(ara[i]);
            visited[i]=1;
            call();
            visited[i]=0;
            vc.pop_back();
        }
    }
}

