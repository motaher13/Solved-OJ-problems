#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,b,d,s=0,c=0;
    scanf("%d %d %d",&n,&b,&d);
    for(i=0;i<n;i++)
    {
        scanf("%d",&m);
        if(m>b)
            continue;
        s+=m;
        if(s>d){
            c++;
            s=0;}
    }
    printf("%d\n",c);

    return 0;
}
