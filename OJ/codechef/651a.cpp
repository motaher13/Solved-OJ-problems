#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,p,q,c=0;
    scanf("%d %d",&p,&q);
    while(p>0 && q>0)
    {

        if(p>=q)
        {
            p-=2;
            q++;
        }
        else if(q>p)
        {
            q-=2;
            p++;
        }
        if(p>=0 && q>=0)
            c++;
    }
    printf("%d\n",c);
    return 0;
}
