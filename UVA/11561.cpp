#include<stdio.h>
#include<string.h>
char str[500][500];
int m,n,c;
void DFS(int x,int y)
{
    if(x<0 || y<0 || x==m || y==n) return;
    if(str[x][y]=='#') return;
    if(str[x][y]=='G')
        c++;
    str[x][y]='#';
    if(str[x][y+1]!='T'&&str[x][y-1]!='T'&&str[x+1][y]!='T'&&str[x-1][y]!='T')
    {

        DFS(x,y+1);
        DFS(x,y-1);
        DFS(x+1,y);
        DFS(x-1,y);
    }

}

int main()
{
    int i,j,k,l;
    while(scanf("%d %d",&n,&m)==2)
    {

        for(i=0; i<m; i++)
            scanf("%s",str[i]);

        for(i=0; i<m; i++)
            for(j=0; j<n; j++)
                if(str[i][j]=='P')
                {
                    c=0;
                    DFS(i,j);
                }

        printf("%d\n",c);
    }
    return 0;
}


