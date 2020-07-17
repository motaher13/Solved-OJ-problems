#include<bits/stdc++.h>
using namespace std;
int ara[500000];
int main()
{
    int i,j,k,l,m,n,mx,c,v,f,t;
    scanf("%d",&t);
    for(int cas=1; cas<=t; cas++)
    {
        stack<int>st;
        scanf("%d",&n);
        for(i=0; i<n; i++)
        {
            scanf("%d",&ara[i]);
        }
        ara[i]=0;
        j=0,mx=0;
        for(i=0; i<=n; i++)
        {
            if(st.size()==0 || ara[st.top()]<=ara[i])
            {
                st.push(i);
                j=i;
            }
            else
            {
                while(st.size()>0 &&ara[st.top()]>ara[i])
                {
                    c=st.top();
                    k=ara[c];
                    st.pop();
                    if(st.size()>0)
                    {
                        f=st.top();
                        v=k*(j+1-f-1);
                    }
                    else
                        v=k*(j+1);
                    if(v>mx)
                        mx=v;
                }
                st.push(i);
                j=i;

            }
        }

        printf("Case %d: %d\n",cas,mx);

    }
    return 0;
}
