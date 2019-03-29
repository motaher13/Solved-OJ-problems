#include<bits/stdc++.h>
using namespace std;
int ara[110],n,k;

bool check()
{
    unordered_map<int,int>ump;
    int l=0;
    for(int i=0;i<k;i++)
    {
        if(ump[ara[i]]==0)
            l++;
        ump[ara[i]]++;
    }
    printf("%d ",l);


    for(int i=k;i<n;i++)
    {
        ump[ara[i-k]]--;
        if(ump[ara[i-k]]==0)
            l--;
//        printf("%d ",l);
        if(ump[ara[i]]==0)
            l++;
//        printf("%d ",l);
        ump[ara[i]]++;
        printf("%d ",l);
    }

}

int main()
{
    int i,j,l,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&k);

        for(i=0;i<n;i++) scanf("%d",&ara[i]);

        check();
        printf("\n");

    }

}

