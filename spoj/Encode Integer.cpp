#include<bits/stdc++.h>
using namespace std;
vector<char>vc;
int main()
{
    int i,j,k,l,m,n,t,b,c;
    scanf("%d",&t);
    for(int cs=1;cs<=t;cs++)
    {
        scanf("%d",&n);
        if(n==0)
        {
            printf("10\n");
            continue;
        }
        c=0;
        vc.clear();
        while(n!=1)
        {
            b=0,c=0;
            for(i=9;i>1;i--)
            {
                m=n/i;
                if(m*i==n)
                {
                    b=1;
                    vc.push_back(i);
                    n=m;
                    break;
                }
            }
            if(b==0)
            {
                c=1;
                break;
            }
        }
        if(c==1)
            printf("-1\n");
        else
        {
            sort(vc.begin(),vc.end());
            for(i=0;i<vc.size();i++)
                printf("%d",vc[i]);
            printf("\n");
        }
    }
    return 0;
}
