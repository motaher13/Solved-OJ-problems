#include<stdio.h>
#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<queue>
#include<vector>
#include<cstring>
#include<algorithm>
#include<set>
#include<sstream>
#include<map>
#include<utility>

using namespace std;

#define sf scanf
#define sf1(a) scanf("%d",&a)
#define sf2(a,b) scanf("%d %d",&a,&b)
#define sf3(a,b,c) scanf("%d %d %d",&a,&b,&c)
#define pf printf
#define clr(arr,val) memset(arr,val,sizeof(arr))
#define mp make_pair
#define pb push_back
#define fr first
#define sc second
#define inf (1<<30)-2
#define sz  103

typedef long long int ll;
typedef unsigned long long int ull;
typedef pair<int,int> pi;


int xxx[] = { 0, 1,  0, -1,    -1, 1,  1, -1 };     //4 & 8 move
int yyy[] = { 1, 0, -1,  0,     1, 1, -1, -1 };


int xx[] = { -1, 1, 2, 2,  1, -1, -2, -2 };
int yy[] = {  2, 2, 1,-1, -2, -2, -1,  1 };       // horse move


/*------------------------------------------------------------*/
int dist[sz][sz];
int r,c;
char ar[sz][sz];

int valid(int x,int y)
{
    if(x>=0 && x<r && y>=0 && y<c)
        return 1;
    else return 0;
}

int bfs(int x,int y)
{
    queue<pi>q;
    q.push(mp(x,y));
    dist[x][y]=0;
    while(!q.empty())
    {
        pi tp=q.front();
        if(ar[tp.fr][tp.sc]=='B')
            return dist[tp.fr][tp.sc];

            q.pop();
        for(int i=0;i<8;i++)
        {
            int tx,ty;
            tx=tp.fr+xxx[i];
            ty=tp.sc+yyy[i];
            if(valid(tx,ty) && ar[tx][ty]=='B')
                return dist[tp.fr][tp.sc]+1;
            if(valid(tx,ty) && ar[tx][ty]!='Z' &&  dist[tx][ty]==-1)
            {

                dist[tx][ty]=dist[tp.fr][tp.sc]+1;
                q.push(mp(tx,ty));
            }
        }

    }
    return -1;
}

int main()

{
//#ifndef ONLINE_JUDGE
//freopen("in.txt","r",stdin);
//#endif

int tst,i,j,k,kx,ky;
sf1(tst);
while(tst--)
{
    sf2(r,c);
    clr(dist,-1);
    for(i=0;i<r;i++)
        sf("%s",ar[i]);

        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(ar[i][j]=='Z')
                {
                    for(k=0;k<8;k++)
                    {
                        int tx=i+xx[k];
                        int ty=j+yy[k];
                        if(valid(tx,ty))
                            dist[tx][ty]=inf;
                    }
                }
                if(ar[i][j]=='A')
                {
                    kx=i;
                    ky=j;
                }
            }
        }
     //   pf("%d %d\n",kx,ky);
         int ans= bfs(kx,ky);
         if(ans==-1)
            pf("King Peter, you can't go now!\n");
         else pf("Minimal possible length of a trip is %d\n",ans);
}
    return 0;

}
