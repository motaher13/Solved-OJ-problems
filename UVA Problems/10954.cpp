#include<bits/stdc++.h>
using namespace std;
struct ele
{
    int f;
    bool operator < (const ele&p)const
    {
        return f>p.f;
    }
}mn,mu;
int main()
{
    int i,j,k,l,m,n;
    while(scanf("%d",&n)==1)
    {
        priority_queue<ele>q;
        if(n==0)
            break;
        for(i=0;i<n;i++)
        {
            scanf("%d",&m);
            mn.f=m;
            q.push(mn);
        }
        int s=0;
        while(q.size()>1)
        {
            mn=q.top();
            q.pop();
            mu=q.top();
            q.pop();
            i=mn.f+mu.f;
            s=s+i;
            //printf("%d %d\n",i,s);
            mn.f=i;
            q.push(mn);
        }
        printf("%d\n",s);
    }
    return 0;
}
