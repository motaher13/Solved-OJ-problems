#include<bits/stdc++.h>
using namespace std;

int m,n;
int bm(int p);
int main()
{
    int i,j,k,p;
    scanf("%d %d %d",&n,&p,&m);

    j=bm(p);
    printf("%d",j);


}
int bm(int p)
{
    if(p==0)
        return 1;
    if(p%2==0)
    {

        int j=bm(p/2);
        return ((j%m)*(j%m))%m;
    }
    else{

        return((n%m)*(bm(p-1)%m))%m;
    }
}
