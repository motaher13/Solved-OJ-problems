
#include<bits/stdc++.h>
using namespace std;
int ara[60][60];
int vst[60][60];
int n,m;
void fun(int i,int j)
{

    if(i>=n ||i<0 ||j>=m || j<0) return;
    if(vst[i][j]==1 || ara[i][j]==0) return;
    vst[i][j]=1,ara[i][j]=0;
    fun(i,j+1);
    fun(i,j-1);
    fun(i+1,j);
    fun(i-1,j);
    fun(i+1,j+1);
    fun(i+1,j-1);
    fun(i-1,j+1);
    fun(i-1,j-1);
}

int main()
{
    int i,j,k,l,t;

    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&m);
        for(i=0;i<n;i++)
            for(j=0;j<m;j++)
                scanf("%d",&ara[i][j]),vst[i][j]=0;

        k=0;
        for(i=0;i<n;i++)
            for(j=0;j<m;j++)
                if(ara[i][j]==1 && vst[i][j]==0)
                    fun(i,j),k++;

        printf("%d\n",k);
    }

}
