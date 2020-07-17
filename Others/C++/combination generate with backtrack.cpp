#include<bits/stdc++.h>
using namespace std;
int ara[20],n,r;
vector<int>vc;
int po[20];
int visited[20]= {0};
void call();
int x;
int main()
{
    int i,j,k,l=0;
    printf("enter n and r\n");
    while(scanf("%d%d",&n,&r)==2)
    {
        if(l!=0 && n!=0)
            printf("\n");
        if(n==0)
            break;
        l++;
        vc.clear();
        printf("enter ara\n");
        for(i=0; i<n; i++)
            scanf("%d",&ara[i]);
        call();
    }
return 0;
}
void call()
{
    int i,j;

    if(vc.size()==r)
    {
        for(i=0; i<r; i++)
            printf("%d ",vc[i]);

        printf("\n");
        return;
    }

    for(i=(vc.size()==0? 0:po[vc.size()-1]+1); i<=n-r+vc.size(); i++)
    {
        if(visited[i]==0 && (vc.size()==0 ||i>po[vc.size()-1]))
        {
            vc.push_back(ara[i]);
            po[vc.size()-1]=i;
            visited[i]=1;
            call();
            visited[i]=0;

            vc.pop_back();
        }
    }
}



