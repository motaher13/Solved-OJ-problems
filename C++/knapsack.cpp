#include<bits/stdc++.h>
using namespace std;
int m,n,c;
int mal[10][2]={0};
int ara[1000][1000];
int fn(int i,int w);
int main()
{
    int i,j,k,l;
    scanf("%d %d",&n,&c);
    for(i=1;i<=n;i++)
        scanf("%d %d",&mal[i][0],&mal[i][1]);


    for(i=0;i<=n;i++)
        for(j=0;j<=c;j++)
            ara[i][j]=-1;
    j=fn(1,0);
    printf("%d\n",j);
}
int fn(int i,int w)
{
    //printf("dd\n");
    if(i>n) return 0;
    if(ara[i][w]!=-1)
    {
         //printf("1 %d\n",ara[i][w]);
         return ara[i][w];
    }

    int p1=0,p2=0;
    if(w+mal[i][0]<=c)
        p1=mal[i][1]+fn(i+1,w+mal[i][0]);
    p2=fn(i+1,w);
    ara[i][w]=max(p1,p2);
    //printf("2 %d\n",ara[i][w]);
    return ara[i][w];

}
