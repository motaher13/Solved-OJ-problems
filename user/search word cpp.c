#include<bits/stdc++.h>
using namespace std;
char s[5][5],str[5][5],w[]="TAXES;
int c=0;
int ara[5][5]={0},wo[5];
int dfs(int i,int j, char str[])
{
   c++;
   if(c==5)
   {
       return;
   }
    if(str[i][j+1]==w[c])
        dfs(i,j+1);
    if(str[i][j-1]==w[c])
        dfs(i,j-1);
    if(str[i+1][j]==w[c])
        dfs(i+1,j);
    if(str[i-1][j]==w[c])
        dfs(i-1,j);
    if(str[i+1][j+1]==w[c])
        dfs(i+1,j+1);
    if(str[i-1][j+1]==w[c])
        dfs(i-1,j+1);
    if(str[i+1][j-1]==w[c])
        dfs(i+1,j-1);
    if(str[i-1][j-1]==w[c])
        dfs(i-1,j-1);
    else {
        if(c!=5)
            c=0;
    }
        return;

}
int main()
{
    int i,j,k,l,m;

    for(i=0;i<4;i++)
        for(j=0;j<4;j++)
            scanf("%c",s[i][j]);


    for(i=0;i<4;i++)
        for(j=0;j<4;j++)
        {
            if(s[i][j]==w[0]){
                    for(k=0;k<4;k++){
                        for(m=0;m<4;m++){
                            str[k][m]=s[k][m];
                        }
                    }

             dfs(i,j);
             }

            if(c!=5)
                c=0;
        }
}
