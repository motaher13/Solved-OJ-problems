#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,a,b,c=1,mx=1;
    scanf("%d",&n);
    scanf("%d",&a);
    for(i=1;i<n;i++)
    {
        scanf("%d",&b);
        if(b>a)
        {
            c++;
            if(c>mx)
                mx=c;
        }
        else
            c=1;
        a=b;


    }
    printf("%d\n",mx);
    return 0;
}
