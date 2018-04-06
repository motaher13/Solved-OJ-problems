#include <stdio.h>
#include <vector>
using namespace std;
vector<int>ara;
vector<int>ara2;
int main()
{
   int i,j,k=1,l=1,m,n,p,q,r,s,t,sum,sum2,up,down;
  ara.push_back(1);
  ara2.push_back(1);
  up=1;
  down=1;
   while(k<10000002){
   if(l%2!=0){
    down=down+1;
    for(i=down;i>=1;i--){
        ara.push_back(up);
  ara2.push_back(down);
    if(down!=1){
        down--;
        up++;
    }
        k++;
    }
   }
   else if(l%2==0){
    up=up+1;
    for(i=up;i>=1;i--){
        ara.push_back(up);
  ara2.push_back(down);
       if(up!=1){
        up--;
        down++;
       }
       k++;
    }

   }
    l++;
   }
   while(scanf("%d",&n)==1){
        n=n-1;
   printf("TERM %d IS %d/%d",++n,ara[n],ara2[n]);
   printf("\n");
   }
   return 0;
}
