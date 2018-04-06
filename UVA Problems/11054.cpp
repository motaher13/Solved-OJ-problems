#include<bits/stdc++.h>
using namespace std;
vector<long long>sl,by;
long long ara[100010];
int main()
{
    long long i,j,k,l,m,n;
    //freopen("1.txt","w",stdout);
    while(scanf("%lld",&n)==1)
    {
        if(n==0) break;
        long long c=0;
        by.clear();
        sl.clear();
        for(i=0;i<n;i++)
        {
            scanf("%lld",&ara[i]);
            if(ara[i]<0) sl.push_back(i);
            else by.push_back(i);
        }
        sort(sl.begin(),sl.end());
        sort(by.begin(),by.end());

        k=0;
        for(i=0;i<sl.size();i++)
        {
            while(ara[sl[i]]!=0)
            {
                j=ara[sl[i]]+ara[by[k]];
                //printf("%lld %lld %lld ",i,k,j);
                if(j>0)
                {
                    c+=abs(sl[i]-by[k])*abs(ara[sl[i]]);
                    ara[sl[i]]=0;
                    ara[by[k]]=abs(j);

                }
                else if(j<0)
                {
                    c+=abs(sl[i]-by[k])*(j-ara[sl[i]]);
                    ara[sl[i]]=j;

                    ara[by[k]]=0;
                    k++;
                }
                else
                {
                    c+=abs(sl[i]-by[k])*abs(ara[sl[i]]);
                    ara[sl[i]]=0;
                    ara[by[k]]=0;
                    k++;
                }
                //printf("%lld\n",c);
            }
        }
        printf("%lld\n",c);

    }
    return 0;
}
