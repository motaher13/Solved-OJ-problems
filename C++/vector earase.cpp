#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,a=1;
    vector<int>vc[100];
    for(i=0;i<6;i++)
        for(j=0;j<6;j++)
            vc[i].push_back(1);
    for(i=0;i<6;i++){
        for(j=0;j<6;j++)
            printf("%d ",vc[i][j]);
            printf("\n");
    }
    printf("\n");
    for(i=2;i<6;i++)
        vc[i].erase(vc[i].begin()+3);

    for(i=0;i<6;i++){
        for(j=0;j<vc[i].size();j++)
            printf("%d ",vc[i][j]);
            printf("\n");}
}

