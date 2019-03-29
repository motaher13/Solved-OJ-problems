#include<bits/stdc++.h>
using namespace std;
vector<int>vc;
int main()
{
    int i,j,k,l,m,n,c=0;
    scanf("%d",&n);
    map<int,int>mm;
    for(i=0;i<n;i++)
    {
        scanf("%d",&m);
        if(mm[m]==0)
        {
            mm[m]++;
            vc.push_back(m);
        }
        else
            mm[m]++;
    }
    sort(vc.begin(),vc.end());

    for(i=0,j=1;j<vc.size() && i<vc.size(); )
    {
        if(mm[vc[i]]<=0){
            i=j;
            j++;}
        if(j>=vc.size())
            break;
        while(vc[j]<=vc[i] || mm[vc[j]]<=0)
            j++;
        printf("00 %d %d\n",i,j);
        if(vc[j]>vc[i]){
        mm[vc[i]]--;
        mm[vc[j]]--;
        c++;}
//        if(i==n-1 || j==n-1)
//            break;
        printf("%d %d\n",i,j);
    }
    printf("%d\n",c);
    return 0;
}
