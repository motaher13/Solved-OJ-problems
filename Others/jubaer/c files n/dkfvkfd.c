#include <stdio.h>
void rec(int t,int beg,int aux,int end);
int j,k,p,q,s,n;
int ara[1000];
long long m,r=0;
void rec(int t,int beg,int aux,int end){
if(r==m)return;
     if(t==1){
            ara[beg]=ara[beg]-1;
     ara[end]=ara[end]+1;

r++;
     }
     else{

     rec(t-1,beg,end,aux);
     rec(1,beg,aux,end);
     rec(t-1,aux,beg,end);
     }


}
int main()
{

    while(scanf("%d%lld",&n,&m)){
        r=0;
            if(n==0&&m==0)break;
            if(m==1){
                ara[1]=n-1;
                ara[2]=1;
                ara[3]=0;
            }
            else{
        ara[1]=n;
        ara[2]=0;
        ara[3]=0;
    rec(n,1,2,3);
            }

  printf("%d %d %d\n",ara[1],ara[2],ara[3]);
    }
    return 0;
}
