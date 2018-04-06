#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,p;
    int ara[10][10];
    m=0;
    map<int,pair<int,int> >mm;
    for(i=1;i<4;i++)
        for(j=1;j<4;j++)
        {
             m++;
             ara[i][j]=m;
             mm[m]={i,j};
        }
    scanf("%d",&p);
    string s;
    cin>>s;
    for(i=0;i<p;i++)
    {
        m=s[i]-48;
        n=s[i+1]-48;
        k=mm[m].first-mm[n].first;
        l=mm[m].second-mm[n].second;
        for(int a=1;a<=)
    }

}
