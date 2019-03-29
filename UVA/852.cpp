#include<stdio.h>
#include<string.h>
char str[20][20];
int ara[20][20];
int m,n,w,b,c,ww,bb;
void dd(int x,int y);
void DFS(int x,int y)
{

    if(x<0 || y<0 || x==9 || y==9) return;
    else if(ara[x][y]==2) return;

    if(str[x][y]=='O')
        w++;
    if(str[x][y]=='X')
        b++;
    ara[x][y]=2;
    DFS(x,y+1);

    DFS(x+1,y);
    DFS(x-1,y);
    DFS(x+1,y+1);

    DFS(x-1,y+1);


}

int main()
{
    int i,j,k,l,t;
    scanf("%d",&t);
    getchar();
    while(t--)
    {

        for(i=0; i<9; i++)
            gets(str[i]);
        c=0;
        w=0,b=0;
        for(i=0;i<15;i++)
            for(j=0;j<15;j++)
                ara[i][j]=0;
        DFS(0,0);

        for(i=0; i<15; i++)
            for(j=0; j<15; j++)
                ara[i][j]=0;

        for(i=0; i<9; i++)
            for(j=0; j<9; j++)
                if(str[i][j]=='.' && ara[i][j]!=2)
                {
                    c=0,ww=0,bb=0;
                    dd(i,j);


                    if(ww==0 && bb>0)
                        b=b+c;
                    else if(bb==0 && ww>0)
                        w=w+c;

                }

        printf("Black %d White %d\n",b,w);
    }
    return 0;
}

void dd(int x,int y)
{
    if(x<0 || y<0 || x==9 || y==9) return;
    if(str[x][y]=='X')
    {
        bb++;
        return;
    }
    if(str[x][y]=='O')
    {
        ww++;
        return;
    }
    if(ara[x][y]==2)
        return;
    c++;
    ara[x][y]=2;
    dd(x,y+1);
    dd(x,y-1);
    dd(x+1,y);
    dd(x-1,y);
}




















