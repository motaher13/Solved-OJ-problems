#include<bits/stdc++.h>
using namespace std;
#define ll long long

int ara[100000]= {0};
vector<int>vc;
int q[100000]= {0};
map<int,int>mm;

int main()
{

    ll i,j,k,l,n,p,t,r;

    for(i=2; i<60000; i=(i==2?3:i+2))
    {
        if(ara[i]==0)
        {
            vc.push_back(i);
            mm[i]=1;
            for(j=1;j*i<60000;j++)
                ara[i*j]=1;
        }
    }

    while(scanf("%lld",&n)==1)
    {
        if(n==0)
            break;
        printf("%lld = ",n);
        int b=0;
        if(n<0)
            b=1;
        n=abs(n);
        j=sqrt(n);
        for(i=0; i<=j; i++)
            q[i]=0;
        ll e=n;
        int g=0;
        if(b==1)
        {
            printf("-1");
            g=1;
        }
        if(mm[e]==0)
        for(i=0; i<vc.size()&&vc[i]<=sqrt(e) && mm[e]==0; i++)
        {
            while(e%vc[i]==0)
            {

                if(g==0)
                printf("%d",vc[i]);
                else
                    printf(" x %d",vc[i]);
                g++;
                e=e/vc[i];
                q[i]++;
            }
        }

        if(e!=1)
        {
            if(g==0)
                printf("%lld",e);
            else
                printf(" x %lld",e);

        }

        printf("\n");

    }
    return 0;
}
