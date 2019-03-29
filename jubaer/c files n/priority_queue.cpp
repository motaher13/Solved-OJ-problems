#include <stdio.h>
#include <queue>
using namespace std;
int main()
{

    priority_queue<int>q;
    int i,n;
    for(i=0;i<5;i++){
        scanf("%d",&n);
        q.push(n);
    }
    while(!q.empty()){
            i=q.top();
       printf("%d\n",i);
        q.pop();
    }
}
