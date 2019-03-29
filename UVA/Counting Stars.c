#include<stdio.h>
char s[1000][1000];
int r,c,m=0;
void DFS(int x,int y)
{
    if(x<0 || y<0 || x==r || y==c) return;
    else if(s[x][y]=='.') return;
    else if(s[x][y]=='*'){
    s[x][y]='.';
    m++;
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
    int i,j,k,l,n;
    while(scanf("%d %d",&r,&c))
    {
        if(r==0 && c==0)
            break;
        for(i=0;i<r;i++)
            scanf("%s",s[i]);
        n=0;
        for(i=0;i<r;i++)
            for(j=0;j<c;j++)
                if(s[i][j]=='*'){
                    m=0;
                    DFS(i,j);
                    if(m==1)
                        n++;}
        printf("%d\n",n);
    }
}
