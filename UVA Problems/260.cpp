#include<stdio.h>
#include<string.h>
char str[500][500];
int m,n,b;
void DFS(int x,int y)
{

    if(x<0 || y<0 || x==m || y==m) return;
    if(str[x][y]=='w') return;
    if(str[x][y]=='b' && x==m-1)
    {
        b=1;
        return;
    }
    if(str[x][y]=='b')
    {
        printf("%d %d\n",x,y);
        str[x][y]='w';
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
    int i,j,k,l,c,p=0;
    FILE *h;
    h=fopen("z.txt","w");
    while(scanf("%d",&m)==1)
    {
        p++;
        if(m==0)
            break;
        for(i=0; i<m; i++)
            scanf("%s",str[i]);
        b=0;
        printf("\n%s",str[28]);
        DFS(28,6);
        c=0;
        for(i=0; i<m; i++)
            if(str[0][i]=='b')
            {
                b=0;
                DFS(0,i);
                if(b==1)
                {
                    c=1;
                    fprintf(h,"%d B\n",p);
                    printf("%d B\n",p);
                    break;
                }

            }
        if(c==0){
        fprintf(h,"%d W\n",p);
        printf("%d W\n",p);
    }
}
return 0;
}


