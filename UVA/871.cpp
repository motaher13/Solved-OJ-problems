#include<stdio.h>
#include<string.h>
char str[500][500];
int m,n,mx;
void DFS(int x,int y)
{
    n=strlen(str[x]);

    if(x<0 || y<0 || x==m || y==n) return;

    if(str[x][y]=='0') return;

    if(str[x][y]=='1')
    {
        mx++;

        str[x][y]='0';
        DFS(x,y+1);
        DFS(x,y-1);
        DFS(x+1,y);
        DFS(x-1,y);
        DFS(x+1,y+1);
        DFS(x+1,y-1);
        DFS(x-1,y+1);
        DFS(x-1,y-1);
    }

}

int main()
{
    int i,j,k,l,c,t,mm;

    scanf("%d",&t);
    getchar();
    getchar();


    while(t--)
    {
        i=0,mm=0;;
        while(1)
        {
            gets(str[i]);
            l=strlen(str[i]);
              if(l==0)
                  break;
            i++;
        }
        c=0;
        m=i;

        for(i=0; i<m; i++)
        {
            n=strlen(str[i]);
            for(j=0; j<n; j++)
                if(str[i][j]=='1')
                {
                    mx=0;
                    DFS(i,j);
                    if(mx>mm)
                        mm=mx;
                    c++;
                }
        }

        printf("%d\n",mm);
        if(t>0)
            printf("\n");
    }
    return 0;
}


