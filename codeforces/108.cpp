#include<bits/stdc++.h>
using namespace std;
int m,n,p,q,r=0;
void call(int a,int b,int c,int d,int e);
vector<int>vc;
int main()
{
    int i,j,k,l,t;
    scanf("%d %d %d %d",&m,&n,&p,&q);

    call(0,0,0,0,0);
    printf("%d\n",r);
    return 0;
}
void call(int a,int b,int c,int d,int e)
{
    int i;
    if(a>m || b>n || c>p|| d>q) return;
    if(a==m && b==n && e==m+n) r++;

    for(i=1;c+i<=p && a+i<=m;i++)
    {
        e++;
         call(a+i,b,c+i,0,e);
         e--;
    }

    for(i=1;d+i<=q && b+i<=n;i++)
    {
        e++;
        call(a,b+i,0,d+i,e);
        e--;

    }

}
