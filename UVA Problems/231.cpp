#include<bits/stdc++.h>
using namespace std;
vector<int>vc;
int call(int i,int c,int m);
int main()
{
    //freopen("1.txt","w",stdout);
    int i,j,k=0,l,m,n;
    while(scanf("%d",&m)==1)
    {
        if(m!=-1)
        {
            vc.push_back(m);
            //vi.push_back(0);
        }
        else if(m==-1 && vc.size()!=0)
        {
            j=call(0,32768,0);
            k++;
            if(k>1)
                printf("\n");
            printf("Test #%d:\n  maximum possible interceptions: %d\n",k,j);
            vc.clear();

        }

    }
    return 0;
}
int call(int i,int c,int m)
{
    //printf("%d %d %d\n",i,c,m);
    if(i>vc.size()-1) return m;
    if(vc[i]>c) return call(i+1,c,m);
    //if(vi[i]!=0) ret vi[i];
    int j=call(i+1,vc[i],m+1);
    int k=call(i+1,c,m);
    return max(j,k);
}

