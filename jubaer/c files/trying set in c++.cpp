#include <stdio.h>
#include <set>
using namespace std;
int main()
{
    set<int>se;
    set<int>::iterator i;
    int n,p;
    for(n=0;n<5;n++){
        scanf("%d",&p);
        se.insert(p);
    }
    for(i=se.begin();i!=se.end();i++){
        printf("%d ",*i);
    }

}
