#include<bits/stdc++.h>
using namespace std;
int ara[]={1,2,3};
vector<int>vc;
int visited[20]={0};

void call()
{
    int i,j;

    if(vc.size()==3)
    {
        for(i=0;i<3;i++)
            printf("%d",vc[i]);
        printf("\n");
        return;
    }

    for(i=0;i<3;i++)
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
int mai

}











