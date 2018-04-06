#include<stdio.h>
int c,d,s[100][100]={0},t,r;
void dfs(int a,int b,int e,int f)
{
    int i,j,k;
    if(a<1 || a>8 || b<1 || b>8) return;
    if(s[a][b]!=0) return;
    s[a][b]=s[e][f]+1;
    if(a==c && b==d){
        r=a,t=d;
        printf("r=%d t=%d e=%d f=%d\n",r,t,e,f);
        return;}
    dfs(a+1,b+2,a,b);
    dfs(a-1,b+2,a,b);
    dfs(a+1,b-2,a,b);
    dfs(a-1,b-2,a,b);
    dfs(a+2,b-1,a,b);
    dfs(a-2,b-1,a,b);
    dfs(a+2,b+1,a,b);
    dfs(a-2,b+1,a,b);


}
int main()
{
    int i,j,k,l,a,b;
    while(scanf("%d %d",&a,&b)==2)
    {
        for(i=0;i<9;i++)
            memset(s[i],0,9);
        scanf("%d %d",&c,&d);
        dfs(a,b,a,b);
        printf("%d\n",s[r][t]-1);



    }
}
