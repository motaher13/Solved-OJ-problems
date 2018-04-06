#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,m,n;
    double a,b,c;
    scanf("%d",&n);
    priority_queue<double>q;
    for(i=0;i<n;i++)
    {
        scanf("%lf",&a);
        q.push(a);

    }

    while(q.size()>1)
        {
            a=q.top();
            q.pop();
            b=q.top();
            q.pop();
            c=2*(sqrt(a*b));
            q.push(c);
        }
        c=q.top();
        printf("%.2lf\n",c);

        return 0;

}
