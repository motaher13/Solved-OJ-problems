#include<bits/stdc++.h>
using namespace std;
int ara[1010][3],n;
vector<int>vc,vc0,vc1;

void call(int i,int j,int k);
int main()
{
    int i,j,k,l;
    char s1[1010],s2[1010];
    scanf("%d",&n);
    scanf("%s %s",s1,s2);
    for(i=1;i<=n;i++)
        ara[i][0]=s1[i-1]-48;
    for(i=1;i<=n;i++)
        ara[i][1]=s2[i-1]-48;

    call(1,1,0);
    if(vc.size()==2*n)
        for(i=0;i<vc.size();i++)
            printf("%d",vc[i]);
    else
        printf("Impossible");
    printf("\n");
    return 0;
}
void call(int i,int j,int k)
{

    //printf("%d %d %d\n",i,j,k);
    if(vc.size()==2*n) return;
    if(i>n && j>n) return;
    if(ara[i][0]==0 && i<=n)
    {
        if(vc0.size()<=vc1.size())
        {
            vc0.push_back(0);
            vc.push_back(1);
            call(i+1,j,0);
            if(vc.size()==2*n) return;
            vc0.pop_back();
            vc.pop_back();

        }
    }
    if(ara[i][0]==1 && i<=n)
    {
        if(vc1.size()<=vc0.size())
        {
            vc1.push_back(1);
            vc.push_back(1);
            call(i+1,j,1);
            if(vc.size()==2*n) return;
            vc1.pop_back();
            vc.pop_back();

        }
    }
    if(ara[j][1]==0 && j<=n)
    {
        if(vc0.size()<=vc1.size())
        {
            vc0.push_back(0);
            vc.push_back(2);
            call(i,j+1,0);
            if(vc.size()==2*n) return;
            vc0.pop_back();
            vc.pop_back();

        }
    }
    if(ara[j][1]==1 && j<=n)
    {
        if(vc1.size()<=vc0.size())
        {
            vc1.push_back(1);
            vc.push_back(2);
            call(i,j+1,1);
            if(vc.size()==2*n) return;
            vc1.pop_back();
            vc.pop_back();

        }
    }

}
