#include<stdio.h>
#include<string.h>
char s[200][200];
int cnt,t,l;
int v[200][200]= {0};
void dfs(int n,int m)
{
    int p=strlen(s[n]);
    if(n<0 || m<0 || n>t-1 || m>p-1)
        return;
    if(v[n][m]==1) return;
    if(s[n][m]=='L') return;
    cnt++;
    v[n][m]=1;
    dfs(n,m+1);
    dfs(n,m-1);
    dfs(n+1,m);
    dfs(n-1,m);
    dfs(n+1,m+1);
    dfs(n-1,m-1);
    dfs(n+1,m-1);
    dfs(n-1,m+1);

}
int main()
{
  //  FILE *myoutput;
//myoutput=fopen("output.txt","w");
    int i,j,k,m,n,p,q,r;
    char c;
    scanf("%d",&k);
    getchar();
getchar();
    while(k--)
    {
        p=0,q=0,r=0;
        while(gets(s[p]))
        {
            if(s[p][0]=='\0')
                break;
            else if(s[p][0]!='L' && s[p][0]!='W')
            {
                if(r==0)
                {
                    t=p,r=1;
                    l=strlen(s[p-1]);

                }
                sscanf(s[p],"%d %d",&n,&m);
                //for(i=0; i<110; i++)
                    memset(v,0,sizeof v);
                cnt=0;
                dfs(n-1,m-1);

                printf("%d\n",cnt);
                p--;
            }
            p++;
        }
        if(k>0)
       printf("\n");

    }
    return 0;
}
