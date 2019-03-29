#include<bits/stdc++.h>
using namespace std;
char s[500][500];
int i;
void dfs(int j,int k)
{
    int l=strlen(s[j]);
    if(j<0 || k<0 || j>i || k>=l)
        return;
    if(s[j][k]!=' ' && s[j][k]!='*') return;

    s[j][k]='#';
    dfs(j,k+1);
    dfs(j,k-1);
    dfs(j+1,k);
    dfs(j-1,k);
    dfs(j+1,k+1);
    dfs(j+1,k-1);
    dfs(j-1,k+1);
    dfs(j-1,k-1);

}




int main()
{
    int j,k,l,m,n,b,t;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        for(i=0;;i++)
        {
            gets(s[i]);
            if(s[i][0]=='_')
                break;
        }
        b=0;
        for(j=0;j<=i;j++)
        {
            l=strlen(s[0]);
            for(k=0;k<l;k++)
            {
                if(s[j][k]=='*'){

                    dfs(j,k);

                    b=1;
                break;}
            }
            if(b==1) break;
        }

        for(j=0;j<=i;j++)
            printf("%s\n",s[j]);

    }
    return 0;
}
