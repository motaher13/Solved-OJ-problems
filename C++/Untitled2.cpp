#include<bits/stdc++.h>
using namespace std;
int ara[]= {2,6},m,n;
int vi[5][100];
int call(int i,int am);
int main()
{
    int i,j,k,l;
    while(1)
    {
        scanf("%d",&n);
        for(i=0; i<3; i++)
            memset(vi[i],-1,sizeof vi[i]);
        j=call(0,0);
        printf("%d\n",j);

    }

}
int call(int i,int am)
{
    //printf("%d %d\n",i,am);
    if(am==n) {
        //printf("%d\n",i);
        return 1;}
    if(am>n ||i>1) return 0;
    if(vi[i][am]!=-1) return vi[i][am];
    int r1=0,r2=0;
    if(am+ara[i]<=n) r1=call(i,am+ara[i]);
    r2=call(i+1,am);
    vi[i][am]=r1+r2;
    //printf("%d %d %d %d %d\n",vi[i][am],i,am,r1,r2);
    return vi[i][am];
}


