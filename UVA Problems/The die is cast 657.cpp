#include<bits/stdc++.h>
using namespace std;
char s[60][60];
int p=0,a,b;

void dfs(int i,int j,char c)
{
    if(i<0 || j<0 || i>=a || j>=b || s[i][j]=='.') return;
    if(s[i][j]=='X' && c=='*')
        p++;
        c=s[i][j];
        s[i][j]='.';
        dfs(i+1,j,c);
        dfs(i,j-1,c);
        dfs(i,j+1,c);
        dfs(i-1,j,c);
}
int main()
{
    int rr[1000];
    int i,j,k,l=0,m,n;
    char c;
    while(scanf("%d %d",&b,&a)==2)
    {
        l++;
        if(a==0 && b==0)
            break;
        printf("Throw %d\n",l);
        for(i=0; i<a; i++)
            scanf("%s",s[i]);
        int u=0;
        for(i=0; i<a; i++)
            for(j=0; j<b; j++)
            {
                p=0;
                if(s[i][j]=='X')
                {
                    c='*';
                    dfs(i,j,c);
                    rr[u]=p;
                    u++;
                }
                else if(s[i][j]=='*')
                {
                    c='*';
                    dfs(i,j,c);
                    rr[u]=p;
                    u++;
                }
            }
            int e;
            sort(rr,rr+u);
            for(i=0;i<u;i++)
                printf("%d ",rr[i]);
        printf("\n\n");
    }
    return 0;
}
