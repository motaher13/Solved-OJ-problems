#include <stdio.h>
#include <map>
#include <vector>
using namespace std;
map<int,int>name;
map<int, std::map<int, int> > mymap;
int main()
{
    int i,j,k,l,m,n;
    while(scanf("%d%d",&m,&j)==2){
    for(i=0;i<m;i++){
        scanf("%d",&n);
        if(name.find(n)!=name.end()){
            name[n]++;
        }
        else name[n]=1;
        l=name[n];
       mymap[n][l]=i+1;

    }
    while(j--){
    scanf("%d%d",&k,&l);
    printf("%d\n",mymap[l][k]);
    }
    mymap.clear();
    name.clear();
    }
    return 0;
}
