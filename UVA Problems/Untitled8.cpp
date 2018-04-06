#include<bits/stdc++.h>
using namespace std;
struct node
{
    int w;
    bool operator < (const node&p)const
    {
        return w>p.w;
    }
};
int main()
{
    int i,j,k,l,m,n;
    priority_queue<node>q;
    for(i=0;i<6;i=i+1)
    {
        node p;
        p.w=i;
        q.push(p);
    }

    while(!q.empty())
    {
        printf("%d",q.top());
        q.pop();
    }

}
