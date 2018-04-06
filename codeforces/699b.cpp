#include<bits/stdc++.h>
using namespace std;
int u[1010]={0},v[1010]={0};
int main()
{
    int i,j,k,l,m,n,c=0,b=0;
    string s[1010];
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
        cin>>s[i];
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
    {
        if(s[i][j]=='*')
        {
            u[i]++;
            v[j]++;
            c++;
        }

    }
//    for(i=0;i<n;i++)
//        printf("%d ",u[i]);
//    printf("\n");
//    for(i=0;i<m;i++)
//        printf("%d ",v[i]);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if((u[i]+v[j]==c+1 && s[i][j]=='*' )|| (u[i]+v[j]==c && s[i][j]!='*'))
            {
                printf("YES\n%d %d\n",i+1,j+1);
                b=1;
                break;
            }
        }
        if(b==1)
            break;
    }
    if(b==0)
        printf("NO\n");
    return 0;
}
