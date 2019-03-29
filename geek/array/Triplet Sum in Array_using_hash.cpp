#include<bits/stdc++.h>
using namespace std;
int ara[100010],n,m;

bool check()
{

    for(int i=0;i<n-2;i++)
    {
        unordered_set<int>s;
        int temp=m-ara[i];
        for(int j=i+1;j<n;j++)
        {
            if(s.find(temp-ara[j])!=s.end())
                return true;

            s.insert(ara[j]);
        }
    }

    return false;
}
int main()
{
    int i,j,k,l,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&m);
        for(i=0;i<n;i++) scanf("%d",&ara[i]);

        if(check())
            printf("1\n");
        else
            printf("0\n");

    }

}
