 #include <iostream>
#include <algorithm>
#include <vector>
#include <sstream>
#include <fstream>
#include <string>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <functional>
#include <bitset>
#include <iomanip>

#include <ctime>
#include <cassert>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <climits>
#include <cstdlib>

using namespace std;


#define foR(i1,st,ed) for(int i1 = st , j1 = ed ; i1 < j1 ; ++i1 )
#define fo(i1,ed) foR( i1 , 0 , ed )
#define foE(i1,st,ed) foR( i1, st, ed+1 )
#define foit(i, x) for (typeof((x).begin()) i = (x).begin(); i != (x).end(); i++)
#define bip system("pause")
#define Int long long
#define pb push_back
#define SZ(X) (int)(X).size()
#define LN(X) (int)(X).length()
#define mk make_pair
#define SET( ARRAY , VALUE ) memset( ARRAY , VALUE , sizeof(ARRAY) )
#define line putchar_unlocked('\n')

template<class T1>
inline void debug(T1 _x) {
    cout<<_x<<'\n';
}
template<class T1, class T2>
inline void debug(T1 _x,T2 _y) {
    cout<<_x<<' '<<_y<<'\n';
}
template<class T1, class T2, class T3>
inline void debug(T1 _x,T2 _y,T3 _z) {
    cout<<_x<<' '<<_y<<' '<<_z<<'\n';
}
template<class T1, class T2, class T3, class T4>
inline void debug(T1 _x,T2 _y,T3 _z,T4 _zz) {
    cout<<_x<<' '<<_y<<' '<<_z<<' '<<_zz<<'\n';
}
template< class T1>
inline void debug(T1 _array,int _size) {
    cout<<"[";
    for (int i=0; i<_size; ++i) {
        cout<<' '<<_array[i];
    }
    puts(" ]");
}

#define getchar getchar_unlocked
#define putchar putchar_unlocked

inline void fastRead(int *a) {
    register char c=0;
    while (c<33) c=getchar();
    *a=0;
    while (c>33)
    {
        *a=*a*10+c-'0';
        c=getchar();
    }
}
inline string fastRead() {
    register char c[33];
    gets(c);
    return (string)c;
}
inline bool CI(int &_x) {
    return scanf("%d",&_x)==1;
}
inline bool CI(int &_x, int &_y) {
    return CI(_x)&&CI(_y) ;
}
inline bool CI(int &_x, int &_y, int &_z) {
    return CI(_x)&&CI(_y)&&CI(_z) ;
}
inline bool CI(int &_x, int &_y, int &_z, int &_zz) {
    return CI(_x)&&CI(_y)&&CI(_z)&&CI(_zz) ;
}
inline void wait( double seconds ) {
    double endtime = clock()+( seconds* CLOCKS_PER_SEC );
    while ( clock() < endtime ) {
        ;
    }
}
const int mx=105;
int playerCount;
struct player {
    int bt;
    int bl;
    int fl;
    player(int bt=0,int bl=0,int fl=0):
            bt(bt),bl(bl),fl(fl) {
        ;
    }
};
double eps=1e-9;
player players[mx];
int Bt,Bl,Al;
inline int batsman(player P) {
    double bt = P.bt;
    double fl = P.fl;
    return round( bt*0.8  + fl*0.2 + eps );
}
inline int bowler(player P) {
    double bt = P.bt;
    double bl = P.bl;
    double fl = P.fl;
    return  round(bl*0.7  + bt*0.10 + fl*0.2 +eps);
}
inline int rounder(player P) {
    double bt = P.bt;
    double bl = P.bl;
    double fl = P.fl;
    return round(bt*0.4 + bl*0.4 + fl*0.2 +eps );
}
const int inf=1023456789;
int dp[mx][11][11][11];
bool vis[mx][11][11][11];
int go(int at, int bt, int bl, int al) {
    if ( at>=playerCount ) {
        return bt==0 && bl==0 && al==0 ? 0 : -inf;
    }

    if (vis[at][bt][bl][al])return dp[at][bt][bl][al];
    vis[at][bt][bl][al]=true;
    int bst=-inf;
    //current player ke nibo na
    bst=max(bst, go(at+1,bt,bl,al));

    //current player ke batsman hisabe select korbo
    if (bt>0) {
        bst=max(bst, go(at+1,bt-1,bl,al)+batsman(players[at]) );
    }
    //current player ke bowler hisabe select korbo
    if (bl>0) {
        bst=max(bst, go(at+1,bt,bl-1,al)+bowler(players[at]) );
    }
    //current player ke all-rounder hisabe select korbo
    if (al>0) {
        bst=max(bst, go(at+1,bt,bl,al-1)+rounder(players[at]) );
    }

    return dp[at][bt][bl][al]=bst;
}
deque<int> batsmen,bowlers,all_rounders;

void bk(int at, int bt, int bl, int al, int res) {
    if ( at>=playerCount ) {
        return ;
    }


    if ( res==go(at+1,bt,bl,al) ) {
        bk(at+1,bt,bl,al,res);
        return ;
    }
    int asbatsman=batsman(players[at]) ;
    int asbowler =bowler(players[at]);
    int asrounder=rounder(players[at]);

    if (bt>0) {
        int v= go(at+1,bt-1,bl,al)+asbatsman;
        if ( res==v ) {
            batsmen.push_back(at+1);
            bk(at+1,bt-1,bl,al,res-asbatsman);
            return ;
        }
    }
    if (bl>0) {
        int v= go(at+1,bt,bl-1,al)+asbowler;
        if ( res==v ) {
            bowlers.push_back(at+1);
            bk(at+1,bt,bl-1,al,res-asbowler);
            return ;
        }
    }
    if (al>0) {
        int v= go(at+1,bt,bl,al-1)+asrounder;
        if ( res==v ) {
            all_rounders.push_back(at+1);
            bk(at+1,bt,bl,al-1,res-asrounder);
            return ;
        }
    }
    return ;
}
int kase=1;
inline void Solve() {
    fo(i,playerCount) {
        CI( players[i].bt, players[i].bl, players[i].fl );
    }
    CI(Bt,Bl,Al);
    batsmen.clear();
    bowlers.clear();
    all_rounders.clear();

    SET(vis,false);
    int res=go(0,Bt,Bl,Al);
    bk(0,Bt,Bl,Al,res);
    if (kase!=1)line;

    cout<<"Team #"<<kase<<"\n";
    cout<<"Maximum Effective Score =  "<<res<<"\n";
    cout<<"Batsmen :";
    foit(it,batsmen)cout<<' '<<(*it);
    cout<<"\nBowlers :";
    foit(it,bowlers)cout<<' '<<(*it);
    cout<<"\nAll-rounders :";
    foit(it,all_rounders)cout<<' '<<(*it);
    line;
}

int main() {
    while ( scanf("%d",&playerCount)==1 ) {
        if (playerCount==0)break;
        Solve();
        ++kase;
    }


    return 0;
}

