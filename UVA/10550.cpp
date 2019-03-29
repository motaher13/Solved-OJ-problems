#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p,q,r,s,i,j,k,l;
    while(scanf("%d %d %d %d",&p,&q,&r,&s)==4)
    {
        if(p==0 && q==0 && r==0 && s==0)
            break;
        i=80;
        if(p>q)
            i=i+p-q;
        else if(p<q)
            i=i+p+40-q;
        i=i+40;
        if(q<r)
            i=i+r-q;
        else if(q>r)
            i=i+r+40-q;
        if(r>s)
            i=i+r-s;
        else if(r<s)
            i=i+r+40-s;
        printf("%d\n",i*9);


    }
    return 0;
}
