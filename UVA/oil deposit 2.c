#include<stdio.h>
#include<string.h>
char str[500][500];
int m,n;
void DFS(int x,int y)
{
    if(x<0 || y<0 || x==m || y==n) return;
    else if(str[x][y]=='*') return;
    else if(str[x][y]=='@'){
    str[x][y]='*';
    DFS(x,y+1);
    DFS(x,y-1);
    DFS(x+1,y);
    DFS(x-1,y);
    DFS(x+1,y+1);
    DFS(x+1,y-1);
    DFS(x-1,y+1);
    DFS(x-1,y-1);}

}

int main()
{
    int i,j,k,l,c;
    while(scanf("%d %d",&m,&n)==2)
    {
        if(m==0)
            break;
        for(i=0;i<m;i++)
                scanf("%s",str[i]);
        c=0;
        for(i=0;i<m;i++)
            for(j=0;j<n;j++)
                if(str[i][j]=='@'){
                    DFS(i,j);
                    c++;}
        printf("%d\n",c);
    }
    return 0;
}
