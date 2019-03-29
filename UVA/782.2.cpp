#include<bits/stdc++.h>
using namespace std;
char s[100][100],s1[100][100];
int m;
void DFS(int x,int y);
int main()
{
    FILE *g;
    g=fopen("x.txt","w");
    int i,j,k,l,n,t;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        int mx=0;
        for(m=0;; m++)
        {
            gets(s[m]);
            l=strlen(s[m]);
            if(l>mx)
                mx=l;
            strcpy(s1[m],s[m]);
            if(s[m][0]=='_')
                break;
        }
        m++;
        for(i=0; i<m; i++)
        {
            l=strlen(s[i]);
            if(l<mx+1)
            {
                for(j=l; j<mx+2; j++)
                {
                    s[i][j]=' ';
                    s1[i][j]=' ';
                }
                s[i][j]='\0';
                s1[i][j]='\0';
            }
        }

        for(i=0; i<m; i++)
        {
            int w=strlen(s[i]);
            for(j=0; j<w; j++)
                if(s[i][j]=='*')
                {
                    s[i][j]=' ';
                    DFS(i,j);
                    break;
                }
        }

        for(i=0; i<m; i++)
        {
            printf("%s\n",s[i]);
            fprintf(g,"%s\n",s[i]);
        }

    }
    return 0;

}

void DFS(int x,int y)
{

    int l=strlen(s[x]);

    if(x<0 || y<0 || x>=m || y>l)
        return;

    if(s[x][y]!='*'&& s[x][y]!=' ')
        return;

    if(s1[x][y]=='#')
        return;

    if((x>0 &&s[x-1][y]!='_' &&s[x-1][y]!='#' && s[x-1][y]!=' ')|| (x<m-1 &&s[x+1][y]!='_' &&s[x+1][y]!='#' && s[x+1][y]!=' ')||(y<l-1&& s[x][y+1]!='_' &&s[x][y+1]!='#' && s[x][y+1]!=' ')||(y>0 && s[x][y-1]!='_' &&s[x][y-1]!='#' && s[x][y-1]!=' '))
        s[x][y]='#';

    s1[x][y]='#';
    DFS(x,y-1);
    DFS(x,y+1);
    DFS(x+1,y);
    DFS(x-1,y);

}



















