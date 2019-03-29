#include <bits/stdc++.h>
using namespace std;
long long int dp[100009][3][9],value[1000009][3][9],ara[100009],store[100009];
void dp_func(int i,int bol,int pow)
{
    if(i==0){
        dp[i][bol][pow]=0;
        value[i][bol][pow]=0;
        return;
    }
    long long ret=0,ret2=0,d,e;
    if(dp[i][bol][pow]!=-1)return;
    if(bol==0){
        for(long long p=0;p<=store[i]&&p*ara[i]<ara[i+1];p++){
                int c=0;
        if(p<store[i])c=1;
            dp_func(i-1,c,p);
            d=dp[i-1][c][p]+p;
            e=value[i-1][c][p]+(p*ara[i]);
            if(e>=ara[i+1])continue;
            if(ret<d){
                ret=d;
                ret2=e;
            }
            else if(ret==d){
                ret2=max(ret2,e);
            }
        }
         dp[i][bol][pow]=ret;
         value[i][bol][pow]=ret2;
         return;
    }
     for(long long p=0;p*ara[i]<ara[i+1];p++){
                int c=0;
        c=1;
            dp_func(i-1,1,p);
            d=dp[i-1][c][p]+p;
            e=value[i-1][c][p]+(p*ara[i]);
            if(e>=ara[i+1])continue;
            if(ret<d){
                ret=d;
                ret2=e;
            }
            else if(ret==d){
                ret2=max(ret2,e);
            }
        }
         dp[i][bol][pow]=ret;
         value[i][bol][pow]=ret2;
         return;

}
int main()
{
 int i,j,k,l,m,n;
 for(i=1;i<=100001;i++){
        long long ac=i;
    ara[i]=(ac*ac*ac);
 }
//cout<<ara[100000]<<endl;
 long long p,q,r,s,t,u,v,w,x,y,z;
 cin>>z;
 for(int i=100000;i>=1&&z;i--){
        q=0;
    if(z>ara[i]){
        q=z/ara[i];
        z=z-(q*ara[i]);
    }
   store[i]=q;
 }
// cout<<"sfddf"<//
//for(i=1;i<5;i++)cout<<store[i]<<" ";
//cout<<endl;
  memset(dp,-1,sizeof dp);
 dp_func(20000,0,0);
cout<<dp[100000][0][0]<<" "<<value[100000][0][0]<<endl;

}
