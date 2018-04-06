#include<stdio.h>
#include<string.h>
char str[500][500];
int m,r;
void DFS(int x,int y)
{
    if(x<0 || y<0 || x==m || y==m) return;
    else if(str[x][y]=='w') return;
    else if(str[x][y]=='b' && x==m-1)
    {
        r=1;
        return;
    }
    else if(str[x][y]=='b')
    {
        str[x][y]='*';
        DFS(x,y+1);
        DFS(x,y-1);
        DFS(x+1,y);
        DFS(x-1,y);
        DFS(x+1,y+1);

        DFS(x-1,y-1);
    }

}

int main()
{
    int i,j,k,l,c,e=0;

    while(scanf("%d %d",&m)==1)
    {
        e++;
        if(m==0)
            break;
        for(i=0; i<m; i++)
            scanf("%s",str[i]);
        c=0;
        for(i=0; i<m; i++)
            if(str[0][i]=='b')
            {
                r=0;
                DFS(0,i);
                if(r==1)
                {
                    c=1;


                    printf("%d B\n",e);
                    break;
                }

            }
        if(c==0)
                {


                    printf("%d W\n",e);

                }
    }
    return 0;
}

