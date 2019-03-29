#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,b=0;
    scanf("%d",&j);
    string s;
    for(i=0;i<j;i++)
    {
        cin>>s>>m>>n;

        if(m>=2400 && n>m)
            b=1;
    }
    if(b==1)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
