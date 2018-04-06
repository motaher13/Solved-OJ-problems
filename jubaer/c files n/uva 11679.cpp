#include <stdio.h>
#include <map>
using namespace std;
int main()
{
    int n,m,i,j,k,l,d,c,w,ck;
   while(scanf("%d%d",&n,&m)){
       map<int,int>name;
        if(n==0&&m==0)break;
    for(i=1;i<=n;i++){
        scanf("%d",&l);
        name[i]=l;
    }

    ck=1;
    for(i=1;i<=m;i++){
        scanf("%d%d%d",&d,&c,&w);
        name[d]=name[d]-w;
        name[c]=name[c]+w;
        if(name[c]>=0&&name[d]>=0);
    }
    for(i=1;i<=n;i++){
        if(name[i]<0){
                ck=0;
                break;
        }
    }
    if(ck==1)printf("S");
    else printf("N");
    printf("\n");
    name.clear();
   }
   return 0;
}
