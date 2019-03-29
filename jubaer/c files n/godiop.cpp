#include<stdio.h>
#include<cstring>
#include<string>
#include<algorithm>
#include<vector>
#define REP(i, b, n) for (int i = b; i < n; i++)
#define rep(i,n) REP(i, 0, n)
#define DBG 0
using namespace std;

int N,E,color[200],cn;
vector<int>egs[200];
bool trav[200];
bool mark(int u,int cr,int &len){
    int b;
    if(DBG)printf("mark %d %d\n",u,cr);
    trav[u]=1,color[u]=cr;
    if(cr==1)cn++;
    int nc=(cr==1?2:1);
    rep(i,egs[u].size()){
        b=egs[u][i];
        if(color[b]&&color[b]!=nc)return 0;         //traverse and wrong color
        if(!trav[b])len++,mark(b,nc,len);
    }
    return 1;
}
void ans(){
    int tot=0,len,c;
    bool fail=0;
    memset(color,0,sizeof(color));
    memset(trav,0,sizeof(trav));
    rep(i,N){
        if(!trav[i]){
            cn=0,len=1;
            if(mark(i,1,len)){
                if(DBG)printf("len cn %d %d\n",len,cn);
                c=min(cn,len-cn);
                if(c==0)c=1;
                tot+=c;
            }
            else {fail=1;break;}
        }
    }
    if(!fail)printf("%d\n",tot);
    else printf("-1\n");
}
int main(){
    int n,m,a,b;
    scanf("%d",&n);
    rep(i,n){
        rep(i,200)egs[i].clear();
        E=0;
        scanf("%d%d",&N,&m);
        rep(i,m)scanf("%d%d",&a,&b),egs[a].push_back(b),egs[b].push_back(a),E++;
        ans();
    }
}
