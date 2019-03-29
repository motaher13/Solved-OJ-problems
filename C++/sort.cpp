#include<bits/stdc++.h>
using namespace std;

bool myfunction(int i,int j)
{
    return (i>j);
}

struct myclass
{
    bool operator()(int i,int j)
    {
        return (i<j);
    }
}mycomp;
int main()
{
    int i,j,k;
    vector<int>vc;
    for(i=9;i>0;i--)
        vc.push_back(i);

    for(i=0;i<vc.size();i++)
        printf("%d ",vc[i]);
    printf("\n");

    sort(vc.begin(),vc.begin()+5);

    for(i=0;i<vc.size();i++)
        printf("%d ",vc[i]);
    printf("\n");

    sort(vc.begin(),vc.end());

    for(i=0;i<vc.size();i++)
        printf("%d ",vc[i]);
    printf("\n");

    sort(vc.begin(),vc.end(),myfunction);

    for(i=0;i<vc.size();i++)
        printf("%d ",vc[i]);
    printf("\n");

    sort(vc.begin(),vc.end(),mycomp);

    for(i=0;i<vc.size();i++)
        printf("%d ",vc[i]);
    printf("\n");

}






