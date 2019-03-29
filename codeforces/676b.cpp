#include <bits/stdc++.h>
using namespace std;
int vis[12][1000];
double dp[12][1000];
int main()
{
   // vis[1][250]=1;
int i,j,k,l,m,n,ma=0,mi=2147483647;
   for(i=1;i<=10;i++){
        for(j=1;j<=500;j++){
                dp[i][j]=0;
        }
    }

 /* for(i=1;i<=10;i++){
    for(j=1;j<=700;j++){
        if(vis[i][j]==1){
            //printf("1");
            ma=max(ma,j);
            mi=min(mi,j);
        }
     //   else printf(" ");
    }
   // printf("\n");
  }*/
 // cout<<ma<<" "<<mi<<endl;
  int time,cnt=1,len;
  double p;
  cin>>len>>time;
  if(time==0){
    printf("0");
    return 0;
  }
  double sum=0;
  while(time--){
  dp[1][250]+=1;
  sum=0;
  for(i=1;i<=len;i++){
    for(j=1;j<=500;j++){
        if(dp[i][j]>0){
            p=dp[i][j]-1;
            if(p>0){
                dp[i][j]=dp[i][j]-p;
                dp[i+1][j+1]+=p/2;
                if(dp[i+1][j+1]>=1&&i+1<=len&&vis[i+1][j+1]==0){
                        cnt++;
                        vis[i+1][j+1]=1;
                }
                if(i==len&&p>0)sum+=p;
                dp[i+1][j-1]+=p/2;
                if(dp[i+1][j-1]>=1&&i+1<=len&&vis[i+1][j-1]==0){
                        cnt++;
                        vis[i+1][j-1]=1;
                }
            }
        }

    }
  }
  }
  cout<<cnt<<endl;

}
