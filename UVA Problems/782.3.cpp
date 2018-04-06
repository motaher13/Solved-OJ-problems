#include<bits/stdc++.h>
using namespace std;
string s[100],s1[100];
int m;
void DFS(int x,int y);
int main()
{
    int i,j,k,l,n,t;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        for(m=0;;m++)
        {
            getline(cin,s[m]);
            s1[m]=s[m];
            if(s[m][0]=='_')
                break;
        }
        m++;

        for(i=0;i<m;i++)
            for(j=0;j<s[i].size();j++)
                if(s[i][j]=='*')
                    {
                        s[i][j]=' ';
                        DFS(i,j);
                    }
        for(i=0;i<m;i++)
            cout<<s[i]<<endl;

    }
    return 0;

}

void DFS(int x,int y)
{

    int l=s[x].size();

    if(x<0 || y<0 || x>=m || y>l)
        return;

    if(s[x][y]!='*'&& s[x][y]!=' ')
        return;

    if(s1[x][y]=='#')
        return;

    if((s[x-1][y]!='*' &&s[x-1][y]!='#' && s[x-1][y]!=' ')|| (s[x+1][y]!='*' &&s[x+1][y]!='#' && s[x+1][y]!=' ')||(s[x][y+1]!='*' &&s[x][y+1]!='#' && s[x][y+1]!=' ')||(s[x][y-1]!='*' &&s[x][y-1]!='#' && s[x][y-1]!=' '))
        s[x][y]='#';

//    if(s[x][y]=='X' || s[x][y]=='#' || s1[x][y]=='#')
//        return;
//    if(s[x-1][y]=='X' || s[x+1][y]=='X' || s[x][y-1]=='X' || s[x][y+1]=='X')
//            s[x][y]='#';
    s1[x][y]='#';
    DFS(x,y-1);
    DFS(x,y+1);
    DFS(x+1,y);
    DFS(x-1,y);

}



















