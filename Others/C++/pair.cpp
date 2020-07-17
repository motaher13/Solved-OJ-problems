#include<bits/stdc++.h>
using namespace std;

//struct myclass
//{
//    bool operator()(pair<int,int>i,pair<int,int>j)
//    {
//        return (i.first<j.first);
//    }
//}mycomp;
bool mycomp( pair<int,int> m ,pair<int,int> n)
{

    return m.first<n.first;

}

int main()
{
    int i,j,k=0;
    vector<pair<int,int> >vc;
    pair<int,int>m;
    for(i=1,j=11; i<6; i++,j--)
    {
        k++;
        m.first=j;
        m.second=i;
        vc.push_back(m);
    }
    for(i=0;i<k;i++)
        printf("%d %d\n",vc[i].first,vc[i].second);
    printf("\n\n");

    sort(vc.begin(),vc.end(),mycomp);

    for(i=0;i<k;i++)
        printf("%d %d\n",vc[i].first,vc[i].second);
}

