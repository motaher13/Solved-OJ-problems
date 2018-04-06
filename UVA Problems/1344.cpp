#include<bits/stdc++.h>
using namespace std;
vector<int>vc,vcc;
int main()
{
    int i,j,k,l,m,n;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        vc.clear();
        vcc.clear();
        for(i=0;i<n;i++)
        {
            scanf("%d",&m);
            vc.push_back(m);
        }
        for(i=0;i<n;i++)
        {
            scanf("%d",&m);
            vcc.push_back(m);
        }
        sort(vc.begin(),vc.end());
        sort(vcc.begin(),vcc.end());
        i=n-1,j=n-1;
        int c=0;
        k=n;
        while(j>=0 && i>=0)
        {
            if(vc[i]>vcc[j])
            {
                c++;
                i--;
                j--;
            }

            else if(vc[i]==vcc[j])
            {

                if(j==0&& vc[i]>vcc[j-1])
                {

                    j--;
                }

                else
                {
                    k--;
                    i--,j--;
                }

            }
            else
                j--;
        }

        m=(c*200)-(k-c)*200;
        printf("%d\n",m);

    }
    return 0;
}

